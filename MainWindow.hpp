#pragma once

#include <QMainWindow>

#include "View/View.hpp"

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
  View keyItem;
};
