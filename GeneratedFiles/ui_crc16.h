/********************************************************************************
** Form generated from reading UI file 'crc16.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRC16_H
#define UI_CRC16_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crc16
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTextEdit *crc16Lineedit;
    QTextEdit *txtEditcrcResult;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *crc16)
    {
        if (crc16->objectName().isEmpty())
            crc16->setObjectName(QStringLiteral("crc16"));
        crc16->resize(504, 602);
        centralWidget = new QWidget(crc16);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 230, 75, 23));
        crc16Lineedit = new QTextEdit(centralWidget);
        crc16Lineedit->setObjectName(QStringLiteral("crc16Lineedit"));
        crc16Lineedit->setGeometry(QRect(60, 40, 371, 161));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(11);
        crc16Lineedit->setFont(font);
        txtEditcrcResult = new QTextEdit(centralWidget);
        txtEditcrcResult->setObjectName(QStringLiteral("txtEditcrcResult"));
        txtEditcrcResult->setGeometry(QRect(60, 290, 371, 221));
        txtEditcrcResult->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 230, 75, 23));
        crc16->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(crc16);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 504, 23));
        crc16->setMenuBar(menuBar);
        mainToolBar = new QToolBar(crc16);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        crc16->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(crc16);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        crc16->setStatusBar(statusBar);

        retranslateUi(crc16);

        QMetaObject::connectSlotsByName(crc16);
    } // setupUi

    void retranslateUi(QMainWindow *crc16)
    {
        crc16->setWindowTitle(QApplication::translate("crc16", "crc16", Q_NULLPTR));
        pushButton->setText(QApplication::translate("crc16", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("crc16", "clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class crc16: public Ui_crc16 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRC16_H
