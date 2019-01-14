#include <QtGui>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget();
    
    name_label = new QLabel(tr("Name:"));
    name_line = new QLineEdit();
    email_label = new QLabel(tr("Email:"));
    email_line = new QLineEdit();
    phone_label = new QLabel(tr("Phone:"));
    phone_line = new QLineEdit();
    phone_type_combobox = new QComboBox();
    
    phone_type_combobox->setEditable(false);
    phone_type_combobox->addItem(tr("Home"));
    phone_type_combobox->addItem(tr("Cell"));
    
    edit_button = new QPushButton(tr("E"));
    save_button = new QPushButton(tr("S"));
    cancel_button = new QPushButton(tr("C"));
    save_button->hide();
    cancel_button->hide();

    QHBoxLayout *layoutName = new QHBoxLayout;
    layoutName->addWidget(name_label);
    layoutName->addWidget(name_line);
    
    QHBoxLayout *layoutEmail = new QHBoxLayout;
    layoutEmail->addWidget(email_label);
    layoutEmail->addWidget(email_line);
    
    QVBoxLayout *layoutNE = new QVBoxLayout;
    layoutNE->addLayout(layoutName);
    layoutNE->addLayout(layoutEmail);
    
    QHBoxLayout *layoutButton = new QHBoxLayout;
    layoutButton->addStretch();
    layoutButton->addWidget(edit_button);
    layoutButton->addWidget(save_button);
    layoutButton->addWidget(cancel_button);
    
    QVBoxlayout *layoutButtons = new QVBoxLayout;
    layoutButtons->addLayout(layoutButton);
    layoutButtons->addStretch();
    
    QHBoxLayout *layoutNEButtons = new QHBoxLayout;
    layoutNEButtons->addLayout(layoutNE);
    layoutNEButtons->addLayout(layoutButtons);
    
    QHBoxLayout *layoutPhone = new QHBoxLayout;
    layoutPhone->addStretch();
    layoutPhone->addWidget(phone_label);
    layoutPhone->addWidget(phone_line);
    layoutPhone->addWidget(phone_type_combobox);
    layoutPhone->addStretch();

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addLayout(layoutNEButtons);
    layout->addLayout(layoutPhone);

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
