#ifndef LINKEDDEVICE_H
#define LINKEDDEVICE_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "Model/key_data.h"

class LinkedDevice: public QObject
{
    Q_OBJECT
public:
    LinkedDevice();

private:
    QSerialPort *serialPort;
    QSerialPortInfo serialInfo;
    QStringList getAvailableSerialPorts();
    void autoConnect();
    bool deviceIsFoundOnPort(QString portName);
    void initPort(QString portName);

    void sendCommand(QString command);
    QList<QMap<QString, QVariant> > getParsedResponse(QString response);
    QString lastCommand;



private slots:
    void onSerialPortDataReceived();


};

#endif // LINKEDDEVICE_H
