#ifndef REMENUBAR_H
#define REMENUBAR_H

#include <QWidget>
class QPushButton;
class QHBoxLayout;
class ReMenuBar : public QWidget
{
    Q_OBJECT
public:
    explicit ReMenuBar(QWidget *parent = nullptr);
public:
    QPushButton* m_optionBt;
    QPushButton* m_minSizeBt;
    QPushButton* m_maxSizeBt;
    QPushButton* m_closeBt;
    QHBoxLayout* m_hLayout;
private:
    QString m_colorBk;
    QWidget* m_parent;
public:
    //初始化控价
    void init();
    void setBkColor(QString color);
protected:
    void paintEvent(QPaintEvent*e);
signals:
    void minSizeButtonClicked();
    void closeButtonClicked();
    void optionButtonClicked();
    void maxSizeButtonClicked();
public slots:
};

#endif // REMENUBAR_H
