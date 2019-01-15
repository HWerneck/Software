#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QWidget;
class QListWidget;
class QPushButton;
class QLineEdit;
class QGridLayout;
class QHBoxWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget *widget;
    QListWidget *list;
    
    QLineEdit *id_line;
    QLineEdit *name_line;
    QLineEdit *species_line;
    QLineEdit *paw_line;
    
    QGridLayout *layoutRight;
    QHBoxLayout *layout;
};

#endif // MAINWINDOW_H
