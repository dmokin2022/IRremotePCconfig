/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include "View.hpp"
#include "ViewItem.hpp"

View::View(QScrollArea *scrollArea, QVBoxLayout *verticalLayout)
{
    this->scrollArea = scrollArea;
    this->verticalLayout1 = verticalLayout;
}

void View::showModel()
{
    for (auto &key : model.keys) {
        ViewItem *item = new ViewItem(key, model, scrollArea);

        //QFrame *newKeyFrame = this->addKeyItemToUI(key);
        verticalLayout1->addWidget(item->getViewItemFrame());
    }
}
