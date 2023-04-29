#pragma once

#include <QMainWindow>

#include "View/ui_KeyItem.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_pushButtonKeyCapture_clicked();

private:
  Ui::MainWindow *ui;
  ui_KeyItem keyItem;
};
