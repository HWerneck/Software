#include <QtGui>
#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget();
    mainScreen = new QStackedWidget();
    Pokemon_Page = new QWidget();
    Trainer_Page = new QWidget();
    Attack_Page = new QWidget();
    Trait_Page = new QWidget();
    Search_Page = new QWidget();
    
    Pokemon_radioButton = new QRadioButton();
    Trainer_radioButton = new QRadioButton();
    Attack_radioButton = new QRadioButton();
    Trait_radioButton = new QRadioButton();
    Search_radioButton = new QRadioButton();
    
    Pokemon_add_button = new QPushButton(tr("A"));
    Pokemon_edit_button = new QPushButton(tr("E"));
    Pokemon_delete_button = new QPushButton(tr("D"));
    Pokemon_save_button = new QPushButton(tr("S"));
    Pokemon_cancel_button = new QPushButton(tr("C"));
    Pokemon_sort_button = new QPushButton(tr("O"));

    QHBoxLayout *layoutUp = new QHBoxLayout;
    layoutUp->addStretch();
    layoutUp->addWidget(Pokemon_add_button);
    layoutUp->addStretch();

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addLayout(layoutUp);
    layout->addWidget(Pokemon_save_button);

    connect(Pokemon_add_button, SIGNAL(clicked()), this, SLOT(addPokemon()));
    connect(Pokemon_edit_button, SIGNAL(toggled(bool)), Pokemon_save_button, SLOT(setVisible(bool)));

    mainScreen.addWidget(Pokemon_Page);
    mainScreen.addWidget(Trainer_Page);
    mainScreen.addWidget(Attack_Page);
    mainScreen.addWidget(Trait_Page);
    mainScreen.addWidget(Search_Page);
    
    widget->setLayout(layout);
    setWindowTitle(tr("Pokemon Database"));
    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{

}

/*
void MainWindow::createMainScreen()
{
    widget = new QWidget();
    mainScreen = new QStackedWidget();
    Pokemon_Page = new QWidget();
    Trainer_Page = new QWidget();
    Attack_Page = new QWidget();
    Trait_Page = new QWidget();
    Search_Page = new QWidget();
    
    Pokemon_radioButton = new QRadioButton();
    Trainer_radioButton = new QRadioButton();
    Attack_radioButton = new QRadioButton();
    Trait_radioButton = new QRadioButton();
    Search_radioButton = new QRadioButton();
    
    //layouts
    //connects
}

void MainWindow::createPokemonPage()
{
    Pokemon_add_button = new QPushButton(tr("A"));
    Pokemon_edit_button = new QPushButton(tr("E"));
    Pokemon_delete_button = new QPushButton(tr("D"));
    Pokemon_save_button = new QPushButton(tr("S"));
    Pokemon_cancel_button = new QPushButton(tr("C"));
    Pokemon_sort_button = new QPushButton(tr("O"));
    
    //layouts
    //connects
}

void MainWindow::createTrainerPage()
{
    Trainer_add_button = new QPushButton(tr("A"));
    Trainer_edit_button = new QPushButton(tr("E"));
    Trainer_delete_button = new QPushButton(tr("D"));
    Trainer_save_button = new QPushButton(tr("S"));
    Trainer_cancel_button = new QPushButton(tr("C"));
    Trainer_sort_button = new QPushButton(tr("O"));
    
    //layouts
    //connects
}

void MainWindow::createAttackPage()
{
    Attack_add_button = new QPushButton(tr("A"));
    Attack_edit_button = new QPushButton(tr("E"));
    Attack_delete_button = new QPushButton(tr("D"));
    Attack_save_button = new QPushButton(tr("S"));
    Attack_cancel_button = new QPushButton(tr("C"));
    Attack_sort_button = new QPushButton(tr("O"));
    
    //layouts
    //connects
}

void MainWindow::createTraitPage()
{
    Trait_add_button = new QPushButton(tr("A"));
    Trait_edit_button = new QPushButton(tr("E"));
    Trait_delete_button = new QPushButton(tr("D"));
    Trait_save_button = new QPushButton(tr("S"));
    Trait_cancel_button = new QPushButton(tr("C"));
    Trait_sort_button = new QPushButton(tr("O"));
    
    //layouts
    //connects
}

void MainWindow::createSearchPage()
{
    //widgets
    //layouts
    //connects
}
*/

void MainWindow::addPokemon()
{
    //adds Pokémon
}
