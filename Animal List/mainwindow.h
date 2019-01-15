#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QWidget;
class QListWidget;
class QPushButton;
class QLineEdit;
class QGridLayout;
class QHBoxLayout;
class QVBoxLayout;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void editButton_clicked();
    void saveButton_clicked();
    void cancelButton_clicked();

private:
    QWidget *widget;

    QPushButton *add_button;
    QPushButton *delete_button;
    QListWidget *list;

    QLineEdit *id_line;
    QLineEdit *name_line;
    QLineEdit *species_line;
    QLineEdit *paw_line;

    QPushButton *edit_button;
    QPushButton *save_button;
    QPushButton *cancel_button;

    QHBoxLayout *layoutLeft1;
    QVBoxLayout *layoutLeft;

    QHBoxLayout *layoutRight1;
    QHBoxLayout *layoutRight2;
    QHBoxLayout *layoutRight3;
    QVBoxLayout *layoutRight;
    QHBoxLayout *layout;
};

#endif // MAINWINDOW_H
