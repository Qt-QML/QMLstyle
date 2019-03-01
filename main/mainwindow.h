#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtQuickWidgets/QQuickWidget>
class ReMenuBar;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QQuickWidget* m_quickView;
    ReMenuBar* m_menuBar;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
