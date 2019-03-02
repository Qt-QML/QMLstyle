#include "remenubar.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QPainter>
#include <Tools/tool.h>
ReMenuBar::ReMenuBar(QWidget *parent) : QWidget(parent)
{
    init();
    connect(m_closeBt,&QPushButton::clicked,this,&ReMenuBar::closeButtonClicked);
    connect(m_minSizeBt,&QPushButton::clicked,this,&ReMenuBar::minSizeButtonClicked);
    connect(m_optionBt,&QPushButton::clicked,this,&ReMenuBar::optionButtonClicked);
    connect(m_maxSizeBt,&QPushButton::clicked,this,&ReMenuBar::maxSizeButtonClicked);
}

void ReMenuBar::init()
{

    m_optionBt=new QPushButton(this);
    //设置对象名，用于与qss文件中对应
    m_optionBt->setObjectName("OptionButton");
    //设置固定大小
    m_optionBt->setFixedSize(30,36);
    //设置控件获取鼠标焦点状态
    m_optionBt->setCursor(Qt::PointingHandCursor);

    m_closeBt=new QPushButton(this);
    m_closeBt->setObjectName("CloseButton");
    m_closeBt->setFixedSize(30,36);
    m_closeBt->setCursor(Qt::PointingHandCursor);

    m_minSizeBt=new QPushButton(this);
    m_minSizeBt->setObjectName("MinSizeButton");
    m_minSizeBt->setFixedSize(30,36);
    m_minSizeBt->setCursor(Qt::PointingHandCursor);

    m_maxSizeBt=new QPushButton(this);
    m_maxSizeBt->setObjectName("MaxSizeButton");
    m_maxSizeBt->setFixedSize(30,36);
    m_maxSizeBt->setCursor(Qt::PointingHandCursor);
    //布局处理
    m_hLayout=new QHBoxLayout(this);

    m_hLayout->addStretch();
    m_hLayout->addWidget(m_optionBt);
    m_hLayout->addWidget(m_maxSizeBt);
    m_hLayout->addWidget(m_minSizeBt);
    m_hLayout->addWidget(m_closeBt);
    m_hLayout->setSpacing(5);
    //设置边距大小
    m_hLayout->setContentsMargins(0,0,0,0);
    //设置窗口尺寸
    this->setFixedHeight(50);
    //设置背景颜色
    this->setBkColor("blue");


}

void ReMenuBar::setBkColor(QString color)
{
    m_colorBk=color;
    update();
}

void ReMenuBar::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter paint(this);
    paint.setPen(Qt::NoPen);
    paint.setBrush(QColor(m_colorBk));
    paint.drawRect(this->rect());

}
