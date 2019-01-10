#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    createMainScreen();
    createLayouts();

    connect(add_button, SIGNAL(clicked()), this, SLOT(showMessage()));
    connect(edit_button, SIGNAL(clicked()), this, SLOT(close()));
    
    widget->setLayout(layout);
    setWindowTitle(tr("Modularization"));
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

void MainWindow::showMessage()
{
    QMessageBox::about(this, tr("Modularization"), tr("It worked!"));
}
