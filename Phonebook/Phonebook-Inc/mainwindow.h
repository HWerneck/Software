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
    /*void createMainScreen();
    */

private:
    QWidget *widget;
    
    QPushButton *Pokemon_add_button;
    QPushButton *Pokemon_edit_button;
    QPushButton *Pokemon_delete_button;
    QPushButton *Pokemon_save_button;
    QPushButton *Pokemon_cancel_button;
    QPushButton *Pokemon_sort_button;
};

#endif // MAINWINDOW_H
