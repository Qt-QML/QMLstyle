#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "remenubar.h"
#include <QtDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_quickView=new QQuickWidget(this);
    m_quickView->setSource(QUrl("qrc:/Loadmain.qml"));
    m_quickView->setResizeMode(QQuickWidget::SizeRootObjectToView);//适配窗口大小

    m_menuBar=new ReMenuBar(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setMenuWidget(m_menuBar);
    //qDebug()<<menuWidget();
    //删除工具栏
    removeToolBar(ui->mainToolBar);
    //标题栏button信号
    connect(m_menuBar,&ReMenuBar::closeButtonClicked,this,&MainWindow::close);
    connect(m_menuBar,&ReMenuBar::minSizeButtonClicked,this,&MainWindow::showMinimized);
    connect(m_menuBar,&ReMenuBar::maxSizeButtonClicked,this,&MainWindow::showMaximized);
}

MainWindow::~MainWindow()
{
    delete ui;
}
