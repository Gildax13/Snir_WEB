#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QWebSocket>
#include <QWebSocketServer>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void onQWebSocketServer_newConnection();

    void onQWebSocket_textMessageReceived(QString);

    void onQtimer_timeOut();


private:
    Ui::Widget *ui;
    QWebSocketServer *sock;
    QWebSocket *client;
    QTimer *majDate;


};
#endif // WIDGET_H
