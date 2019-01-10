#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QWidget;
class QStackedWidget;
class QPushButton;
class QRadioButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void addPokemon();
    /*void createMainScreen();
    void createPokemonPage();
    void createTrainerPage();
    void createAttackPage();
    void createTraitPage();
    void createSearchPage();
    */

private:
    QWidget *widget;
    QStackedWidget *mainScreen;
    QWidget *Pokemon_Page;
    QWidget *Trainer_Page;
    QWidget *Attack_Page;
    QWidget *Trait_Page;
    QWidget *Search_Page;
    
    QRadioButton *Pokemon_radioButton;
    QRadioButton *Trainer_radioButton;
    QRadioButton *Attack_radioButton;
    QRadioButton *Trait_radioButton;
    QRadioButton *Search_radioButton;
    
    QPushButton *Pokemon_add_button;
    QPushButton *Pokemon_edit_button;
    QPushButton *Pokemon_delete_button;
    QPushButton *Pokemon_save_button;
    QPushButton *Pokemon_cancel_button;
    QPushButton *Pokemon_sort_button;
};

#endif // MAINWINDOW_H
