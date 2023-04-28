/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYITEM_H
#define UI_KEYITEM_H

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

class ui_KeyItem {
public:
  QWidget *centralwidget;
  QVBoxLayout *verticalLayout_2;
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

  QFrame *getItemUI(QWidget *scrollArea) {
    frameSingleButtonInfo = new QFrame(scrollArea);
    frameSingleButtonInfo->setObjectName(QString::fromUtf8("frameSingleButtonInfo"));
    frameSingleButtonInfo->setFrameShape(QFrame::StyledPanel);
    frameSingleButtonInfo->setFrameShadow(QFrame::Raised);

    horizontalLayout_2 = new QHBoxLayout(frameSingleButtonInfo);
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

    groupBoxKey = new QGroupBox(frameSingleButtonInfo);
    groupBoxKey->setObjectName(QString::fromUtf8("groupBoxKey"));

    verticalLayout_3 = new QVBoxLayout(groupBoxKey);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

    formLayoutKey = new QFormLayout();
    formLayoutKey->setObjectName(QString::fromUtf8("formLayoutKey"));

    labelKeyNumberHeader = new QLabel(groupBoxKey);
    labelKeyNumberHeader->setObjectName(QString::fromUtf8("labelKeyNumberHeader"));

    formLayoutKey->setWidget(0, QFormLayout::LabelRole, labelKeyNumberHeader);

    labelKeyNumberValue = new QLabel(groupBoxKey);
    labelKeyNumberValue->setObjectName(QString::fromUtf8("labelKeyNumberValue"));

    formLayoutKey->setWidget(0, QFormLayout::FieldRole, labelKeyNumberValue);

    labelKeyNameHeader = new QLabel(groupBoxKey);
    labelKeyNameHeader->setObjectName(QString::fromUtf8("labelKeyNameHeader"));

    formLayoutKey->setWidget(1, QFormLayout::LabelRole, labelKeyNameHeader);

    labelKeyCodeHeader = new QLabel(groupBoxKey);
    labelKeyCodeHeader->setObjectName(QString::fromUtf8("labelKeyCodeHeader"));

    formLayoutKey->setWidget(2, QFormLayout::LabelRole, labelKeyCodeHeader);

    labelKeyCodeValue = new QLabel(groupBoxKey);
    labelKeyCodeValue->setObjectName(QString::fromUtf8("labelKeyCodeValue"));

    formLayoutKey->setWidget(2, QFormLayout::FieldRole, labelKeyCodeValue);

    lineEditKeyNameValue = new QLineEdit(groupBoxKey);
    lineEditKeyNameValue->setObjectName(QString::fromUtf8("lineEditKeyNameValue"));

    formLayoutKey->setWidget(1, QFormLayout::FieldRole, lineEditKeyNameValue);

    verticalLayout->addLayout(formLayoutKey);

    verticalLayout_3->addLayout(verticalLayout);

    horizontalLayout->addWidget(groupBoxKey);

    groupBoxKeyType = new QGroupBox(frameSingleButtonInfo);
    groupBoxKeyType->setObjectName(QString::fromUtf8("groupBoxKeyType"));
    verticalLayout_7 = new QVBoxLayout(groupBoxKeyType);
    verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
    radioButtonToggle = new QRadioButton(groupBoxKeyType);
    radioButtonToggle->setObjectName(QString::fromUtf8("radioButtonToggle"));

    verticalLayout_7->addWidget(radioButtonToggle);

    radioButtonHold = new QRadioButton(groupBoxKeyType);
    radioButtonHold->setObjectName(QString::fromUtf8("radioButtonHold"));
    radioButtonHold->setText("HOLD");

    verticalLayout_7->addWidget(radioButtonHold);

    radioButtonRepeat = new QRadioButton(groupBoxKeyType);
    radioButtonRepeat->setObjectName(QString::fromUtf8("radioButtonRepeat"));

    verticalLayout_7->addWidget(radioButtonRepeat);

    horizontalLayout->addWidget(groupBoxKeyType);

    groupBoxKeyPinAction = new QGroupBox(frameSingleButtonInfo);
    groupBoxKeyPinAction->setObjectName(QString::fromUtf8("groupBoxKeyPinAction"));
    verticalLayout_6 = new QVBoxLayout(groupBoxKeyPinAction);
    verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
    verticalLayoutPinDelta = new QVBoxLayout();
    verticalLayoutPinDelta->setObjectName(QString::fromUtf8("verticalLayoutPinDelta"));
    horizontalLayoutPinAndValue = new QHBoxLayout();
    horizontalLayoutPinAndValue->setObjectName(QString::fromUtf8("horizontalLayoutPinAndValue"));
    comboBoxPinNumber = new QComboBox(groupBoxKeyPinAction);
    comboBoxPinNumber->addItem(QString());
    comboBoxPinNumber->addItem(QString());
    comboBoxPinNumber->addItem(QString());
    comboBoxPinNumber->addItem(QString());
    comboBoxPinNumber->addItem(QString());
    comboBoxPinNumber->addItem(QString());
    comboBoxPinNumber->addItem(QString());
    comboBoxPinNumber->setObjectName(QString::fromUtf8("comboBoxPinNumber"));

    horizontalLayoutPinAndValue->addWidget(comboBoxPinNumber);

    labelHeaderEven = new QLabel(groupBoxKeyPinAction);
    labelHeaderEven->setObjectName(QString::fromUtf8("labelHeaderEven"));

    horizontalLayoutPinAndValue->addWidget(labelHeaderEven);

    lineEditValue = new QLineEdit(groupBoxKeyPinAction);
    lineEditValue->setObjectName(QString::fromUtf8("lineEditValue"));

    horizontalLayoutPinAndValue->addWidget(lineEditValue);

    verticalLayoutPinDelta->addLayout(horizontalLayoutPinAndValue);

    horizontalLayoutDelta = new QHBoxLayout();
    horizontalLayoutDelta->setObjectName(QString::fromUtf8("horizontalLayoutDelta"));
    labelDelta = new QLabel(groupBoxKeyPinAction);
    labelDelta->setObjectName(QString::fromUtf8("labelDelta"));

    horizontalLayoutDelta->addWidget(labelDelta);

    lineEditDeltaIncDec = new QLineEdit(groupBoxKeyPinAction);
    lineEditDeltaIncDec->setObjectName(QString::fromUtf8("lineEditDeltaIncDec"));

    horizontalLayoutDelta->addWidget(lineEditDeltaIncDec);

    verticalLayoutPinDelta->addLayout(horizontalLayoutDelta);

    verticalLayout_6->addLayout(verticalLayoutPinDelta);

    comboBoxValueRef = new QComboBox(groupBoxKeyPinAction);
    comboBoxValueRef->addItem(QString());
    comboBoxValueRef->addItem(QString());
    comboBoxValueRef->addItem(QString());
    comboBoxValueRef->setObjectName(QString::fromUtf8("comboBoxValueRef"));

    verticalLayout_6->addWidget(comboBoxValueRef);

    horizontalLayout->addWidget(groupBoxKeyPinAction);

    horizontalLayout_2->addLayout(horizontalLayout);

    //verticalLayout_2->addWidget(frameSingleButtonInfo);
    retranslateUi();

    return frameSingleButtonInfo;
  }  // setupUi

  void retranslateUi() {
    //MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    groupBoxKey->setTitle(QCoreApplication::translate(
        "MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260", nullptr));
    labelKeyNumberHeader->setText(
        QCoreApplication::translate("MainWindow", "\342\204\226", nullptr));
    labelKeyNumberValue->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
    labelKeyNameHeader->setText(
        QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
    labelKeyCodeHeader->setText(
        QCoreApplication::translate("MainWindow", "\320\232\320\276\320\264", nullptr));
    labelKeyCodeValue->setText(QCoreApplication::translate("MainWindow", "8BC95F3D", nullptr));
    lineEditKeyNameValue->setText(QCoreApplication::translate("MainWindow", "KeyUp", nullptr));
    groupBoxKeyType->setTitle(
        QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
    radioButtonToggle->setText(QCoreApplication::translate("MainWindow", "TOGGLE", nullptr));
    radioButtonHold->setText(QCoreApplication::translate("MainWindow", "HOLD", nullptr));
    radioButtonRepeat->setText(QCoreApplication::translate("MainWindow", "REPEAT", nullptr));
    groupBoxKeyPinAction->setTitle(QCoreApplication::translate("MainWindow",
        "\320\235\320\276\320\266\320\272\320\260  / "
        "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265",
        nullptr));
    comboBoxPinNumber->setItemText(0, QCoreApplication::translate("MainWindow", "P1", nullptr));
    comboBoxPinNumber->setItemText(1, QCoreApplication::translate("MainWindow", "P2", nullptr));
    comboBoxPinNumber->setItemText(2, QCoreApplication::translate("MainWindow", "P3", nullptr));
    comboBoxPinNumber->setItemText(3, QCoreApplication::translate("MainWindow", "P4", nullptr));
    comboBoxPinNumber->setItemText(4, QCoreApplication::translate("MainWindow", "P5", nullptr));
    comboBoxPinNumber->setItemText(5, QCoreApplication::translate("MainWindow", "P6", nullptr));
    comboBoxPinNumber->setItemText(6, QCoreApplication::translate("MainWindow", "P7", nullptr));

    labelHeaderEven->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    labelDelta->setText(QCoreApplication::translate("MainWindow", "d =", nullptr));
    comboBoxValueRef->setItemText(
        0, QCoreApplication::translate("MainWindow", "\342\204\22610 KeyUp", nullptr));
    comboBoxValueRef->setItemText(
        1, QCoreApplication::translate("MainWindow", "\342\204\22611 KeyDown", nullptr));
    comboBoxValueRef->setItemText(
        2, QCoreApplication::translate("MainWindow", "\342\204\22612 KeyLeft", nullptr));

  }  // retranslateUi
};

#endif  // UI_KEYITEM_H
