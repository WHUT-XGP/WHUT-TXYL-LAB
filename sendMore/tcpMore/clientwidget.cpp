#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <QTcpSocket>
#include <QByteArray>
#include <QHostAddress>
ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    setWindowTitle("客户端");
    // 创建TCP
    this->tcpSocket = new QTcpSocket(this);
    // 默认链接

    tcpSocket->connectToHost(QHostAddress("127.0.0.1"),9000);
    // 链接监听
    connect(tcpSocket,&QTcpSocket::connected,[=]()mutable
    {
        ui->textEditReader->append("与服务器自动链接成功！");
    });


    // 新消息监听
    connect(tcpSocket,&QTcpSocket::readyRead,[=]()mutable
    {
       QByteArray temp=tcpSocket->readAll();
       ui->textEditReader->append(temp);
    });

}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_sendButton_clicked()
{
    QString id = ui->lineEdit->text();
    QString str(ui->textEditWriter->toPlainText());
    str = id + ":" + str;
    tcpSocket->write(str.toUtf8());
}
