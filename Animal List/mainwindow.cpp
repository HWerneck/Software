#include "mainwindow.h"
#include "animal.cpp"
#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QHBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget();

    list = new QListWidget;
    list->addItem(tr("Dragon"));
    
    id_line = new QLineEdit();
    id_line.setMinimumSize(50,30);
    id_line.setMaximumSize(50,30);
    name_line = new QLineEdit();
    name_line.setMinimumSize(250,30);
    name_line.setMaximumSize(250,30);
    species_line = new QLineEdit();
    species_line.setMinimumSize(250,30);
    species_line.setMaximumSize(250,30);
    paw_line = new QLineEdit();
    paw_line.setMinimumSize(50,30);
    paw_line.setMaximumSize(50,30);

    //connect(list, SIGNAL(currentRowChanged(int)), stacked, SLOT(setCurrentIndex(int)));

    layoutRight = new QGridLayout;
    layoutRight->addWidget(id_line, 0, 0, Qt::AlignLeft);
    layoutRight->addWidget(name_line, 0, 1, Qt::AlignLeft);
    layoutRight->addWidget(species_line, 1, 0, Qt::AlignLeft);
    layoutRight->addWidget(paw_line, 1, 1, Qt::AlignLeft);
    
    layout = new QHBoxLayout;
    layout->addWidget(list);
    layout->addWidget(layoutRight);

    widget->setLayout(layout);
    setCentralWidget(widget);
    setWindowTitle("Animal List");
}

MainWindow::~MainWindow()
{

}
