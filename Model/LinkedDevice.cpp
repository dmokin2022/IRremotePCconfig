#include "LinkedDevice.h"
#include <QDebug>

LinkedDevice::LinkedDevice()
{

}

QStringList LinkedDevice::getAvailableSerialPorts()
{
    QStringList slist;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        // определить, доступно ли это
        if(!info.isBusy()) {
            slist<<info.portName();
            qDebug() << info.portName();
        }
    }
    return slist;
}

void LinkedDevice::initPort(QString portName)
{
    serialPort = new QSerialPort;
    serialPort->setPortName(portName);     // имя последовательного порта
    serialPort->setBaudRate(115200);    // Скорость бода
    serialPort->setDataBits(QSerialPort::Data8);     // Data Bit.
    serialPort->setParity(QSerialPort::NoParity);    //Контрольная цифра
    serialPort->setStopBits(QSerialPort::OneStop);   // остановка
    serialPort->setFlowControl(QSerialPort::NoFlowControl); // Управление потоком обычно бесполезно

    // [2] последовательный порт
    if (serialPort->open(QIODevice::ReadWrite)){
        qDebug()<< "Последовательный порт" << portName << "был открыт, режим чтения и записи";
    }else{
        qDebug()<< "Ошибка открытия серийного порта" << portName << serialPort->errorString();
        serialPort->clearError();
    }

    // Настройка обработчика сигнала по приёму данных
    connect(serialPort, &QSerialPort::readyRead, this, &LinkedDevice::onSerialPortDataReceived);
}

void LinkedDevice::sendCommand(QString command)
{
    // [3] передача данных
    const QByteArray send_data = command.toUtf8();// вообще нет строки, особенно китайский

    if (serialPort->isOpen()){
        serialPort->write(send_data);
        qDebug() << "Был отправлен:" << QString::fromUtf8(send_data);
    }else{
        qDebug() << "Отправить не удалось, последовательный порт не открыт";
    }
    if (!serialPort->waitForBytesWritten(30000)) {
        qDebug() << "Команда исключения" << serialPort->errorString();
        serialPort->clearError();
    }
}

void LinkedDevice::onSerialPortDataReceived()
{
    if (serialPort->bytesAvailable()) {
        // Данные, полученные последовательным портом, могут не быть непрерывными, при необходимости, данные могут быть кэшированы к разрешению протокола, аналогично обработке данных TCP
        const QByteArray recv_data = serialPort->readAll();
        // Прием передача должна быть последовательной, если она обрабатывается данные байтов, вы можете взять QbyTearray в группу в качестве группы или использовать метод Data () для изменения в форме Char *.
        //ui->textRecv->append(QString::fromUtf8(recv_data));//отображать
        qDebug()<<"Получили:"<<QString::fromUtf8(recv_data);
    }
}
