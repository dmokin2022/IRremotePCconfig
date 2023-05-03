#include "TerminalFrame.hpp"

#include "ui_TerminalFrame.h"

TerminalFrame::TerminalFrame(QWidget *parent) : QFrame(parent), ui(new Ui::TerminalFrame) {
  ui->setupUi(this);
}

TerminalFrame::~TerminalFrame() { delete ui; }

void TerminalFrame::sendMessage(QString message) {
  ui->textEdit->append(message);
  ui->lineEdit->clear();
  ui->lineEdit->setFocus();
}

void TerminalFrame::on_pushButton_clicked() { sendMessage(ui->lineEdit->text()); }

void TerminalFrame::keyPressEvent(QKeyEvent *event) {
  int keyPressed = event->key();
  if (keyPressed == Qt::Key_Return) { sendMessage(ui->lineEdit->text()); }
}

void TerminalFrame::keyReleaseEvent(QKeyEvent *event) {}
