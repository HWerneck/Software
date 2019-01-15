#include <QtGui>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QGridLayout>
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
    
    QGridLayout *layoutLeft = new QGridLayout;
    layoutLeft->addWidget(name_label,0,0,Qt::AlignLeft);
    layoutLeft->addWidget(name_line,0,1,Qt::AlignLeft);

    /*QHBoxLayout *layoutName = new QHBoxLayout;
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

    QVBoxLayout *layoutButtons = new QVBoxLayout;
    layoutButtons->addLayout(layoutButton);
    layoutButtons->addStretch();

    QHBoxLayout *layoutNEButtons = new QHBoxLayout;
    layoutNEButtons->addLayout(layoutNE);
    layoutNEButtons->addLayout(layoutButtons);

    QHBoxLayout *layoutPhone = new QHBoxLayout;
    layoutPhone->addWidget(phone_label);
    layoutPhone->addWidget(phone_line);
    layoutPhone->addWidget(phone_type_combobox);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addLayout(layoutNEButtons);
    layout->addLayout(layoutPhone);
    */
    
    connect(edit_button, SIGNAL(clicked()), this, SLOT(editOn()));
    connect(save_button, SIGNAL(clicked()), this, SLOT(editSave()));
    connect(cancel_button, SIGNAL(clicked()), this, SLOT(editCancel()));

    //widget->setLayout(layout);
    setWindowTitle(tr("Phonebook - Incomplete"));
    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{

}

void MainWindow::editOn()
{
    edit_button->hide();
    save_button->show();
    cancel_button->show();
}

void MainWindow::editSave()
{
    save_button->hide();
    cancel_button->hide();
    edit_button->show();
}
void MainWindow::editCancel()
{
    save_button->hide();
    cancel_button->hide();
    edit_button->show();
}
