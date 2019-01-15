#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QWidget;
class QListWidget;
class QLabel;
class QStackedLayout;
class QStackedWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget *widget;
    QListWidget *list;
    QStackedLayout *stacked;
    QStackedWidget *stackedDragon;
    QStackedWidget *stackedTiger;
    QStackedWidget *stackedElephant;
    QStackedWidget *stackedDog;
    QStackedWidget *stackedWolf;

    QLabel *labelDragon;
    QLabel *labelTiger;
    QLabel *labelElephant;
    QLabel *labelDog;
    QLabel *labelWolf;
};

#endif // MAINWINDOW_H
