#include "mainwindow.h"
#include <QApplication>
#include <Tools/tool.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //设置qss样式表
    qApp->setStyleSheet(Tools::getQssFile(":/qss/dark.qss"));
    return a.exec();
}
