#include "MainWindow.hpp"

#include "TerminalFrame.hpp"
#include "View/View.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  view = new View(ui->scrollAreaAllKeys, ui->verticalLayout_9);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButtonKeyCapture_clicked() {
  //
  //  QFrame *newKeyFrame = view.getItemUI(ui->scrollAreaWidgetContents);
  //ui->verticalLayout_9->addWidget(newKeyFrame);

  view->showModel();
}

void MainWindow::on_pushButton_clicked() {
  TerminalFrame *terminal = new TerminalFrame;
  terminal->show();
}
