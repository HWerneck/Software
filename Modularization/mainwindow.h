#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QWidget;
class QPushButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void createMainScreen();
    void createLayouts();

private:
    QWidget *widget;
    
    QPushButton *add_button;
    QPushButton *edit_button;
};

#endif // MAINWINDOW_H
