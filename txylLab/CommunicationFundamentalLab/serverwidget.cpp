#include "serverwidget.h"
#include "ui_serverwidget.h"
#include <QHostAddress>
ServerWidget::ServerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWidget)
{
    ui->setupUi(this);
    udpSocket=new QUdpSocket(this);
    setWindowTitle("udp 客户端");

}



void ServerWidget::init(QString port)
{
    selfPort = port;
    QString str(port);
    ui->label_Port->setText(str);
    ui->lineEditIP->setText("127.0.0.1");

    //BIND
    udpSocket->bind(port.toInt());
    //当对方进行发送
    connect(udpSocket,&QUdpSocket::readyRead,[=]()mutable
    {
        //读取
        char buff[2024]={0};
        QHostAddress address;
        quint16 port;
        qint64 len = udpSocket->readDatagram(buff,sizeof(buff),&address,&port);
        if(len){
            //进行格式化处理
            QString str = QString("[%1:%2]%3").arg(address.toString()).arg(port).arg(buff);
            ui->Reader->append(str);
        }
    });
}

ServerWidget::~ServerWidget()
{
    delete ui;
}

void ServerWidget::on_sendButton_clicked()
{
    //先获取要发送的地方
    QString ip = ui->lineEditIP->text();
    quint16 port =ui->lineEditPort->text().toInt();
    QString id =ui->lineEditID->text();
    QString message = ui->Writer->toPlainText();
    message=id+":"+message;
    //send
    udpSocket->writeDatagram(message.toUtf8(),QHostAddress(ip),port);
    ui->Reader->append(message);
}
