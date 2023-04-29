#include "MainWindow.hpp"

#include "View/ui_KeyItem.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButtonKeyCapture_clicked() {
  //
  QFrame *newKeyFrame = keyItem.getItemUI(ui->scrollAreaWidgetContents);
  ui->verticalLayout_9->addWidget(newKeyFrame);
  //verticalLayout_9->addWidget(pushButton);
  //ui->scrollAreaWidgetContents

  //  scrollAreaAllKeys = new QScrollArea(centralwidget);
  //  scrollAreaAllKeys->setObjectName(QString::fromUtf8("scrollAreaAllKeys"));
  //  scrollAreaAllKeys->setWidgetResizable(true);
  //  scrollAreaWidgetContents = new QWidget();
  //  scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
  //  scrollAreaWidgetContents->setGeometry(QRect(0, 0, 934, 101));
  //  verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents);
  //  verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
  //  pushButton = new QPushButton(scrollAreaWidgetContents);
  //  pushButton->setObjectName(QString::fromUtf8("pushButton"));

  //  scrollAreaAllKeys->setWidget(scrollAreaWidgetContents);

  //  verticalLayout_2->addWidget(scrollAreaAllKeys);

  //
}
