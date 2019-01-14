#include <QtGui>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget();
    
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
    
    widget->setLayout(layout);
    setWindowTitle(tr("Phonebook - Incomplete"));
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
}*/
