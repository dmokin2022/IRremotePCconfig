/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
********************************************************************************/

#pragma once

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "Model/IRremoteModel.hpp"
#include "ViewItem.hpp"

class View {
public:
  View(QScrollArea *scrollArea, QVBoxLayout *verticalLayout);
  void showModel();
  void showModel(QList<QMap<QString, QVariant>>);
  void showItem(int number);

public slots:
  void onCommandReceived(QList<QMap<QString, QVariant>> &parsedResponse);

private:
  QList<ViewItem *> viewItems;

  IRremoteModel model;

  QScrollArea *scrollArea;
  QVBoxLayout *verticalLayout1;

  QWidget *centralwidget;
  QLabel *labelCurrentButton;
  QFrame *frameSingleButtonInfo;
  QHBoxLayout *horizontalLayout_2;
  QHBoxLayout *horizontalLayout;
  QGroupBox *groupBoxKey;
  QVBoxLayout *verticalLayout_3;
  QVBoxLayout *verticalLayout;
  QFormLayout *formLayoutKey;
  QLabel *labelKeyNumberHeader;
  QLabel *labelKeyNumberValue;
  QLabel *labelKeyNameHeader;
  QLabel *labelKeyCodeHeader;
  QLabel *labelKeyCodeValue;
  QLineEdit *lineEditKeyNameValue;
  QGroupBox *groupBoxKeyType;
  QVBoxLayout *verticalLayout_7;
  QRadioButton *radioButtonToggle;
  QRadioButton *radioButtonHold;
  QRadioButton *radioButtonRepeat;
  QGroupBox *groupBoxKeyPinAction;
  QVBoxLayout *verticalLayout_6;
  QVBoxLayout *verticalLayoutPinDelta;
  QHBoxLayout *horizontalLayoutPinAndValue;
  QComboBox *comboBoxPinNumber;
  QLabel *labelHeaderEven;
  QLineEdit *lineEditValue;
  QHBoxLayout *horizontalLayoutDelta;
  QLabel *labelDelta;
  QLineEdit *lineEditDeltaIncDec;
  QComboBox *comboBoxValueRef;
  QLabel *labelAllButtons;
  QScrollArea *scrollAreaAllButtons;
  QWidget *scrollAreaWidgetContents;
  QVBoxLayout *verticalLayout_9;

  // Элементы кнопок
  QFrame *buttonsFrame;
  QHBoxLayout *horizontalLayout_11;
  QGroupBox *groupBoxKeyOps;
  QVBoxLayout *verticalLayout_13;
  QPushButton *pushButtonKeyCapture;
  QPushButton *pushButtonKeysApply;
  QPushButton *pushButtonKeyDelete;
  QPushButton *pushButtonKeysClear;
  QGroupBox *groupBoxEEPROMOps;
  QVBoxLayout *verticalLayout_14;
  QPushButton *pushButtonEEPROMSave;
  QPushButton *pushButtonEEPROMRestore;
  QGroupBox *groupBoxFileOps;
  QVBoxLayout *verticalLayout_15;
  QPushButton *pushButtonFileSave;
  QPushButton *pushButtonFileLoad;
  QMenuBar *menubar;
  QStatusBar *statusbar;
};
