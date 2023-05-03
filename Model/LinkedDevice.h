#ifndef LINKEDDEVICE_H
#define LINKEDDEVICE_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

//#include "MainWindow.hpp"
#include "Model/key_data.h"
#include "View/View.hpp"

using ResponseList = QList<QMap<QString, QVariant>>;

class LinkedDevice : public QObject {
  Q_OBJECT
public:
  LinkedDevice(View *view);
  void setConnectionsWithUI();
  //getSettingsOfKey(int keyNum);
signals:
  void onCommandResponseReceived(QList<QMap<QString, QVariant>> &parsedResponse);

private:
  //QList<QMap<QString, QVariant>> parsedCommandResponse;
  View *view;
  QSerialPort *serialPort;
  QSerialPortInfo serialInfo;
  QStringList getAvailableSerialPorts();
  void autoConnect();
  bool deviceIsFoundOnPort(QString portName);
  void initPort(QString portName);

  void sendCommand(QString command);
  QList<QMap<QString, QVariant>> getParsedResponse(const QString &response);
  QString lastCommand;

private slots:
  void onSerialPortDataReceived();
};

#endif  // LINKEDDEVICE_H
