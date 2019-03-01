#include "tool.h"
#include <QFile>


QString Tools::getQssFile(const QString &path)
{
    QFile* file=new QFile(path);
    file->open(QIODevice::ReadOnly);
    QString qss;
    if(file->isOpen()){
        qss=file->readAll();
        file->close();
    }

    return qss;
}
