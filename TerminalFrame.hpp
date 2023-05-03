#pragma once

#include <QFrame>
#include <QKeyEvent>

namespace Ui {
class TerminalFrame;
}

class TerminalFrame : public QFrame {
  Q_OBJECT

public:
  explicit TerminalFrame(QWidget *parent = nullptr);
  ~TerminalFrame();
  void sendMessage(QString message);

protected:  //keyboard
  void keyPressEvent(QKeyEvent *event);
  void keyReleaseEvent(QKeyEvent *event);

private slots:
  void on_pushButton_clicked();

private:
  Ui::TerminalFrame *ui;
};
