#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QWidget;
class QLabel;
class QLineEdit;
class QComboBox;
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
    
    QLabel *name_label;
    QLineEdit *name_line;
    QLabel *email_label;
    QLineEdit *email_line;
    QLabel *phone_label;
    QLineEdit *phone_line;
    QComboBox *phone_type_combobox;
    
    QPushButton *edit_button;
    QPushButton *save_button;
    QPushButton *cancel_button;
};

#endif // MAINWINDOW_H
