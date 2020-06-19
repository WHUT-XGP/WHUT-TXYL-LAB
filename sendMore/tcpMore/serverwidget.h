#ifndef SERVERWIDGET_H
#define SERVERWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QVector>
namespace Ui {
class ServerWidget;
}

class ServerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServerWidget(QWidget *parent = 0);
    ~ServerWidget();

private:
    Ui::ServerWidget *ui;
    QVector<QTcpSocket*> socketVec;
    QTcpServer *tcpServer;
};

#endif // SERVERWIDGET_H
