#ifndef SERVERWIDGET_H
#define SERVERWIDGET_H

#include <QWidget>
#include <QUdpSocket>
namespace Ui {
class ServerWidget;
}

class ServerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServerWidget(QWidget *parent = 0);
    ~ServerWidget();
     void init(QString port);
private slots:
     void on_sendButton_clicked();

private:
    Ui::ServerWidget *ui;
   QString selfPort;
    QString peerPort;
    QString peerIP;
    QUdpSocket *udpSocket;


};

#endif // SERVERWIDGET_H
