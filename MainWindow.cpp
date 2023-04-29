#include "MainWindow.hpp"

#include "View/View.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButtonKeyCapture_clicked() {
  //
  QFrame *newKeyFrame = keyItem.getItemUI(ui->scrollAreaWidgetContents);
  ui->verticalLayout_9->addWidget(newKeyFrame);
}
