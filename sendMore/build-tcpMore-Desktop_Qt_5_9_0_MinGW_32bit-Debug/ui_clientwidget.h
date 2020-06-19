/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QTextEdit *textEditReader;
    QLabel *label_3;
    QTextEdit *textEditWriter;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *sendButton;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(488, 458);
        gridLayout = new QGridLayout(ClientWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(ClientWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        textEditReader = new QTextEdit(ClientWidget);
        textEditReader->setObjectName(QStringLiteral("textEditReader"));

        gridLayout->addWidget(textEditReader, 1, 0, 1, 3);

        label_3 = new QLabel(ClientWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        textEditWriter = new QTextEdit(ClientWidget);
        textEditWriter->setObjectName(QStringLiteral("textEditWriter"));

        gridLayout->addWidget(textEditWriter, 3, 0, 1, 3);

        label = new QLabel(ClientWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        lineEdit = new QLineEdit(ClientWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 4, 1, 1, 1);

        sendButton = new QPushButton(ClientWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        gridLayout->addWidget(sendButton, 4, 2, 1, 1);


        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClientWidget", "\350\201\212\345\244\251\350\256\260\345\275\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("ClientWidget", "\350\276\223\345\205\245\346\241\206:", Q_NULLPTR));
        label->setText(QApplication::translate("ClientWidget", "\346\202\250\347\232\204\346\230\265\347\247\260\357\274\232", Q_NULLPTR));
        sendButton->setText(QApplication::translate("ClientWidget", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
