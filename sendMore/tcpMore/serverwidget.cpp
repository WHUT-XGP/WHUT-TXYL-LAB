#include "serverwidget.h"
#include "ui_serverwidget.h"
#include <QDebug>
ServerWidget::ServerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWidget)
{
    ui->setupUi(this);

    tcpServer = new QTcpServer(this);
    setWindowTitle("服务器");
    tcpServer->listen(QHostAddress::Any,9000);

    connect(tcpServer,&QTcpServer::newConnection,[=]()mutable
    {
        // 取出建立好链接的套接字
        QTcpSocket *tcpSocket = tcpServer->nextPendingConnection();

        // 获取对方的ip和端口
        QString ip = tcpSocket->peerAddress().toString();
        qint16 port =tcpSocket->peerPort();
        // 打印一下哈
        QString temp =QString("[ %1 : %2 ]:成功连接").arg(ip).arg(port);
        // 写进UI
        ui->Reader->append(temp);
        this->socketVec.push_back(tcpSocket);
        // 设置接受监听
        connect(tcpSocket,&QTcpSocket::readyRead,[=]()mutable
        {
            //从套接字中读取内容
            QByteArray array = tcpSocket->readAll();
           ui->Reader->append(array);

            for(int i = 0;i<this->socketVec.size();i++){
                if(tcpSocket==socketVec[i]){
                    qDebug()<<"equal有效哈";
                }
                socketVec[i]->write(array);
            }

        });

    });
}

ServerWidget::~ServerWidget()
{
    delete ui;
}
