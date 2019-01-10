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
    createMainScreen();
    createLayouts();

    connect(add_button, SIGNAL(clicked()), this, SLOT());
    connect(edit_button, SIGNAL(toggled(bool)), this, SLOT(setVisible(bool)));
    
    widget->setLayout(layout);
    setWindowTitle(tr("Pokemon Database"));
    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{

}

void MainWindow::createMainScreen()
{
    widget = new QWidget();
    add_button = new QPushButton(tr("A"));
    edit_button = new QPushButton(tr("E"));
    
    Pokemon_radioButton = new QRadioButton();
    Trainer_radioButton = new QRadioButton();
    
    //layouts
    //connects
}

void MainWindow::createLayouts()
{
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addStretch();
    layout->addWidget(add_button);
    layout->addWidget(edit_button);
    layout->addStretch();
    
    //layouts
    //connects
}
