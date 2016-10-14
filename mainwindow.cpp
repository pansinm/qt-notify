#include "mainwindow.h"
#include "notifymanager.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{

    QPushButton * button = new QPushButton("弹窗", this);
    NotifyManager *manager = new NotifyManager(this);

    connect(button, &QPushButton::clicked, manager, [manager]{
        manager->notify("新消息", "新消息新消息新消息新消息", "E:\\workspace\\CassNotification\\Main\\res\\img\\message.png", "http://www.baidu.com");
    });
}
