/********************************************************************************
** Form generated from reading UI file 'serverwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIDGET_H
#define UI_SERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWidget
{
public:
    QTextEdit *Reader;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *Writer;
    QPushButton *sendButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditID;
    QLineEdit *lineEditPort;
    QLabel *label_6;
    QLabel *label_Port;

    void setupUi(QWidget *ServerWidget)
    {
        if (ServerWidget->objectName().isEmpty())
            ServerWidget->setObjectName(QStringLiteral("ServerWidget"));
        ServerWidget->resize(745, 410);
        Reader = new QTextEdit(ServerWidget);
        Reader->setObjectName(QStringLiteral("Reader"));
        Reader->setGeometry(QRect(330, 50, 391, 151));
        Reader->setReadOnly(true);
        label = new QLabel(ServerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 20, 72, 15));
        label_2 = new QLabel(ServerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 210, 72, 15));
        Writer = new QTextEdit(ServerWidget);
        Writer->setObjectName(QStringLiteral("Writer"));
        Writer->setGeometry(QRect(330, 250, 391, 111));
        sendButton = new QPushButton(ServerWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(630, 370, 88, 23));
        label_3 = new QLabel(ServerWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 111, 16));
        label_4 = new QLabel(ServerWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 110, 91, 16));
        label_5 = new QLabel(ServerWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 140, 91, 16));
        lineEditIP = new QLineEdit(ServerWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(110, 80, 113, 21));
        lineEditID = new QLineEdit(ServerWidget);
        lineEditID->setObjectName(QStringLiteral("lineEditID"));
        lineEditID->setGeometry(QRect(110, 140, 113, 21));
        lineEditPort = new QLineEdit(ServerWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(110, 110, 113, 21));
        label_6 = new QLabel(ServerWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 250, 91, 16));
        label_Port = new QLabel(ServerWidget);
        label_Port->setObjectName(QStringLiteral("label_Port"));
        label_Port->setGeometry(QRect(140, 250, 72, 15));

        retranslateUi(ServerWidget);

        QMetaObject::connectSlotsByName(ServerWidget);
    } // setupUi

    void retranslateUi(QWidget *ServerWidget)
    {
        ServerWidget->setWindowTitle(QApplication::translate("ServerWidget", "ServerWidget", Q_NULLPTR));
        label->setText(QApplication::translate("ServerWidget", "\350\201\212\345\244\251\350\256\260\345\275\225\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("ServerWidget", "\350\276\223\345\205\245\346\241\206;", Q_NULLPTR));
        sendButton->setText(QApplication::translate("ServerWidget", "\345\217\221\351\200\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("ServerWidget", "\345\257\271\346\226\271ip\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("ServerWidget", "\345\257\271\346\226\271\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("ServerWidget", "\346\202\250\347\232\204\346\230\265\347\247\260\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("ServerWidget", "\346\202\250\347\232\204\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        label_Port->setText(QApplication::translate("ServerWidget", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ServerWidget: public Ui_ServerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIDGET_H
