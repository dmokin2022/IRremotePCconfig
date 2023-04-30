/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include "ViewItem.hpp"
#include <QDebug>


ViewItem::ViewItem(key_data_t key, IRremoteModel &model, QScrollArea *scrollArea)
{
    this->model = &model;
    this->scrollArea = scrollArea;

    // Фрейм для информации по одной кнопке
    frameSingleButtonInfo = new QFrame(scrollArea);
    frameSingleButtonInfo->setObjectName(QString::fromUtf8("frameSingleButtonInfo"));
    frameSingleButtonInfo->setFrameShape(QFrame::StyledPanel);
    frameSingleButtonInfo->setFrameShadow(QFrame::Raised);

    // Расположение на фрайме в горизонтальный ряд
    horizontalLayout_2 = new QHBoxLayout(frameSingleButtonInfo);
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

    // Первая колонка = Информация о кнопке
    groupBoxKey = new QGroupBox(frameSingleButtonInfo);
    groupBoxKey->setObjectName(QString::fromUtf8("groupBoxKey"));

    verticalLayout_3 = new QVBoxLayout(groupBoxKey);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

    formLayoutKey = new QFormLayout();
    formLayoutKey->setObjectName(QString::fromUtf8("formLayoutKey"));

    // Подпись поля с номером кнопки
    labelKeyNumberHeader = new QLabel(groupBoxKey);
    labelKeyNumberHeader->setObjectName(QString::fromUtf8("labelKeyNumberHeader"));
    labelKeyNumberHeader->setText("№");
    formLayoutKey->setWidget(0, QFormLayout::LabelRole, labelKeyNumberHeader);

    // НОМЕР КНОПКИ
    labelKeyNumberValue = new QLabel(groupBoxKey);
    labelKeyNumberValue->setObjectName(QString::fromUtf8("labelKeyNumberValue"));
    formLayoutKey->setWidget(0, QFormLayout::FieldRole, labelKeyNumberValue);

    // Подпись поля с именем кнопки
    labelKeyNameHeader = new QLabel(groupBoxKey);
    labelKeyNameHeader->setObjectName(QString::fromUtf8("labelKeyNameHeader"));
    labelKeyNameHeader->setText("Название: ");
    formLayoutKey->setWidget(1, QFormLayout::LabelRole, labelKeyNameHeader);

    // Подпись кода кнопки
    labelKeyCodeHeader = new QLabel(groupBoxKey);
    labelKeyCodeHeader->setObjectName(QString::fromUtf8("labelKeyCodeHeader"));
    labelKeyCodeHeader->setText("Код HEX: ");
    formLayoutKey->setWidget(2, QFormLayout::LabelRole, labelKeyCodeHeader);

    // КОД КНОПКИ
    labelKeyCodeValue = new QLabel(groupBoxKey);
    labelKeyCodeValue->setObjectName(QString::fromUtf8("labelKeyCodeValue"));
    //labelKeyCodeValue->setText(QString::number(data.code));
    labelKeyCodeValue->setText(QString("%1").arg(key.code, 0, 16));
    formLayoutKey->setWidget(2, QFormLayout::FieldRole, labelKeyCodeValue);

    // ИМЯ КНОПКИ
    lineEditKeyNameValue = new QLineEdit(groupBoxKey);
    lineEditKeyNameValue->setObjectName(QString::fromUtf8("lineEditKeyNameValue"));
    //lineEditKeyNameValue->setText(key.name);
    formLayoutKey->setWidget(1, QFormLayout::FieldRole, lineEditKeyNameValue);

    verticalLayout->addLayout(formLayoutKey);
    verticalLayout_3->addLayout(verticalLayout);

    // Вторая колонка = Информация о режиме работы
    horizontalLayout->addWidget(groupBoxKey);

    groupBoxKeyType = new QGroupBox(frameSingleButtonInfo);
    groupBoxKeyType->setObjectName(QString::fromUtf8("groupBoxKeyType"));
    verticalLayout_7 = new QVBoxLayout(groupBoxKeyType);
    verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

    // Радиокнопка TOGGLE
    radioButtonToggle = new QRadioButton(groupBoxKeyType);
    radioButtonToggle->setObjectName(QString::fromUtf8("radioButtonToggle"));
    radioButtonToggle->setText("TOGGLE");
    verticalLayout_7->addWidget(radioButtonToggle);

    // Радиокнопка HOLD
    radioButtonHold = new QRadioButton(groupBoxKeyType);
    radioButtonHold->setObjectName(QString::fromUtf8("radioButtonHold"));
    radioButtonHold->setText("HOLD");
    verticalLayout_7->addWidget(radioButtonHold);

    // Радиокнопка REPEAT
    radioButtonRepeat = new QRadioButton(groupBoxKeyType);
    radioButtonRepeat->setObjectName(QString::fromUtf8("radioButtonRepeat"));
    radioButtonRepeat->setText("REPEAT");
    verticalLayout_7->addWidget(radioButtonRepeat);
    horizontalLayout->addWidget(groupBoxKeyType);

    // Третья колонка = Информация о ножке и значении выводимой/изменяемой переменной
    groupBoxKeyPinAction = new QGroupBox(frameSingleButtonInfo);
    groupBoxKeyPinAction->setObjectName(QString::fromUtf8("groupBoxKeyPinAction"));
    verticalLayout_6 = new QVBoxLayout(groupBoxKeyPinAction);
    verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));

    verticalLayoutPinDelta = new QVBoxLayout();
    verticalLayoutPinDelta->setObjectName(QString::fromUtf8("verticalLayoutPinDelta"));
    horizontalLayoutPinAndValue = new QHBoxLayout();
    horizontalLayoutPinAndValue->setObjectName(QString::fromUtf8("horizontalLayoutPinAndValue"));

    // Выпадающий список с названимяи/номерами ножек
    comboBoxPinNumber = new QComboBox(groupBoxKeyPinAction);
    comboBoxPinNumber->setObjectName(QString::fromUtf8("comboBoxPinNumber"));
    horizontalLayoutPinAndValue->addWidget(comboBoxPinNumber);

    // Знак "="
    labelHeaderEven = new QLabel(groupBoxKeyPinAction);
    labelHeaderEven->setObjectName(QString::fromUtf8("labelHeaderEven"));
    labelHeaderEven->setText("=");
    horizontalLayoutPinAndValue->addWidget(labelHeaderEven);

    // Значение переменной для вывода в пин (ШИМ)
    lineEditValue = new QLineEdit(groupBoxKeyPinAction);
    lineEditValue->setObjectName(QString::fromUtf8("lineEditValue"));
    //lineEditValue->setText(QString::number(key.var_val));
    horizontalLayoutPinAndValue->addWidget(lineEditValue);


    verticalLayoutPinDelta->addLayout(horizontalLayoutPinAndValue);

    horizontalLayoutDelta = new QHBoxLayout();
    horizontalLayoutDelta->setObjectName(QString::fromUtf8("horizontalLayoutDelta"));

    // Подпись поля delta значения ("delta=")
    labelDelta = new QLabel(groupBoxKeyPinAction);
    labelDelta->setObjectName(QString::fromUtf8("labelDelta"));
    labelDelta->setText("delta (+/-) =");
    horizontalLayoutDelta->addWidget(labelDelta);

    // Поле редактора дельта значения
    lineEditDeltaIncDec = new QLineEdit(groupBoxKeyPinAction);
    lineEditDeltaIncDec->setObjectName(QString::fromUtf8("lineEditDeltaIncDec"));
    //lineEditDeltaIncDec->setText(QString::number(key.var_step));
    horizontalLayoutDelta->addWidget(lineEditDeltaIncDec);
    verticalLayoutPinDelta->addLayout(horizontalLayoutDelta);

    verticalLayout_6->addLayout(verticalLayoutPinDelta);

    // Ссылка на переменную другой кнопки
    comboBoxValueRef = new QComboBox(groupBoxKeyPinAction);
    comboBoxValueRef->setObjectName(QString::fromUtf8("comboBoxValueRef"));

    verticalLayout_6->addWidget(comboBoxValueRef);

    horizontalLayout->addWidget(groupBoxKeyPinAction);

    horizontalLayout_2->addLayout(horizontalLayout);

    // Выставление текстовых значений оформления
    //retranslateUi();
    setViewDataFields(key);
}

QFrame *ViewItem::getViewItemFrame()
{
    return this->frameSingleButtonInfo;
}

  void ViewItem::retranslateUi() {
    groupBoxKey->setTitle(QCoreApplication::translate(
        "MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260", nullptr));
    labelKeyNumberHeader->setText(
        QCoreApplication::translate("MainWindow", "\342\204\226", nullptr));
    labelKeyNameHeader->setText(
        QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
    labelKeyCodeHeader->setText(
        QCoreApplication::translate("MainWindow", "\320\232\320\276\320\264", nullptr));
    groupBoxKeyType->setTitle(
        QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
    radioButtonToggle->setText(QCoreApplication::translate("MainWindow", "TOGGLE", nullptr));
    radioButtonHold->setText(QCoreApplication::translate("MainWindow", "HOLD", nullptr));
    radioButtonRepeat->setText(QCoreApplication::translate("MainWindow", "REPEAT", nullptr));
    groupBoxKeyPinAction->setTitle(QCoreApplication::translate("MainWindow",
        "\320\235\320\276\320\266\320\272\320\260  / "
        "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265",
        nullptr));

    labelHeaderEven->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    labelDelta->setText(QCoreApplication::translate("MainWindow", "d =", nullptr));
  }

  void ViewItem::setViewDataFields(key_data_t key)
  {
      labelKeyNumberValue->setText(QString::number(key.id));
      labelKeyCodeValue->setText(QString("%1").arg(key.code, 8, 16).toUpper());
      lineEditKeyNameValue->setText(key.name);

      setModeRadioButton(key.mode);

      // ...заполнение выпадающего списка доступных ножек
      fillComboBoxWithAvailablePins(comboBoxPinNumber);
      comboBoxPinNumber->setCurrentIndex(key.pin);

      lineEditValue->setText(QString::number(key.var_val));
      lineEditDeltaIncDec->setText(QString::number(key.var_step));

      // ...заполнение выпадающего списка доступных кнопок
      fillComboBoxWithOtherButtons(comboBoxValueRef);
      comboBoxValueRef->setCurrentIndex(key.var_ref);
  }


static QList<QString> pins{
    "A0",
    "A1",
    "A2",
    "A3",
    "A4",
    "A5",
    "A6",
    "A7",
    "D2",
    "D3~",
    "D4",
    "D5~",
    "D6~",
    "D7",
    "D8",
    "D9~",
    "D10~",
    "D11~",
    "D12",
    "D13"
};

void ViewItem::fillComboBoxWithAvailablePins(QComboBox *comboBoxPinNumber)
{
    for (auto pin : pins) {
        comboBoxPinNumber->addItem(pin);
    }
}

void ViewItem::fillComboBoxWithOtherButtons(QComboBox *comboBoxValueRef)
{
    for (auto key : model->keys) {
        comboBoxValueRef->addItem(key.name);
    }
}

void ViewItem::setModeRadioButton(int mode)
{
    switch(mode) {
        case MODE_TOGGLE: {
          radioButtonToggle->setChecked(true);
          radioButtonRepeat->setChecked(false);
          radioButtonHold->setChecked(false);
    } break;
    case MODE_REPEAT: {
        radioButtonToggle->setChecked(false);
        radioButtonRepeat->setChecked(true);
        radioButtonHold->setChecked(false);

    } break;
    case MODE_HOLD: {
        radioButtonToggle->setChecked(false);
        radioButtonRepeat->setChecked(false);
        radioButtonHold->setChecked(true);
    } break;
    }
}
