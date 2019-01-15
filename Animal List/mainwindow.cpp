#include "mainwindow.h"
//#include "animal.cpp"
#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QThread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget();

    add_button = new QPushButton(tr("A"));
    add_button->setMinimumSize(30,30);
    add_button->setMaximumSize(30,30);
    delete_button = new QPushButton(tr("D"));
    delete_button->setMinimumSize(30,30);
    delete_button->setMaximumSize(30,30);

    list = new QListWidget;
    list->addItem(tr("Dragon"));

    layoutLeft1 = new QHBoxLayout;
    layoutLeft1->addStretch();
    layoutLeft1->addWidget(add_button);
    layoutLeft1->addWidget(delete_button);
    layoutLeft = new QVBoxLayout;
    layoutLeft->addLayout(layoutLeft1);
    layoutLeft->addSpacing(5);
    layoutLeft->addWidget(list);

    id_line = new QLineEdit();
    id_line->setMinimumSize(50,30);
    id_line->setMaximumSize(50,30);
    id_line->setEnabled(false);
    name_line = new QLineEdit();
    name_line->setMinimumSize(250,30);
    name_line->setMaximumSize(250,30);
    name_line->setEnabled(false);
    species_line = new QLineEdit();
    species_line->setMinimumSize(250,30);
    species_line->setMaximumSize(250,30);
    species_line->setEnabled(false);
    paw_line = new QLineEdit();
    paw_line->setMinimumSize(50,30);
    paw_line->setMaximumSize(50,30);
    paw_line->setEnabled(false);

    edit_button = new QPushButton(tr("E"));
    edit_button->setMinimumSize(30,30);
    edit_button->setMaximumSize(30,30);
    save_button = new QPushButton(tr("S"));
    save_button->setMinimumSize(30,30);
    save_button->setMaximumSize(30,30);
    save_button->hide();
    cancel_button = new QPushButton(tr("C"));
    cancel_button->setMinimumSize(30,30);
    cancel_button->setMaximumSize(30,30);
    cancel_button->hide();

    //create a dummy to hold the object being diplayed
    //dummyAnimal = new Animal(0, Animal, animal animal, 0);
    //otherAnimal = new Animal(0, Dog, Canis lupus familiaris, 4); //for illustration!

    connect(edit_button, SIGNAL(clicked()), this, SLOT(editButton_clicked()));
    connect(save_button, SIGNAL(clicked()), this, SLOT(saveButton_clicked()));
    connect(edit_button, SIGNAL(clicked()), this, SLOT(cancelButton_clicked()));

    layoutRight1 = new QHBoxLayout;
    layoutRight1->addStretch();
    layoutRight1->addWidget(edit_button);
    layoutRight1->addWidget(save_button);
    layoutRight1->addWidget(cancel_button);

    layoutRight2 = new QHBoxLayout;
    layoutRight2->addWidget(id_line);
    layoutRight2->addWidget(name_line);

    layoutRight3 = new QHBoxLayout;
    layoutRight3->addWidget(species_line);
    layoutRight3->addWidget(paw_line);

    layoutRight = new QVBoxLayout;
    layoutRight->addLayout(layoutRight1);
    layoutRight->addSpacing(5);
    layoutRight->addLayout(layoutRight2);
    layoutRight->addLayout(layoutRight3);
    layoutRight->addStretch();

    layout = new QHBoxLayout;
    layout->addLayout(layoutLeft);
    layout->addLayout(layoutRight);

    widget->setLayout(layout);
    setCentralWidget(widget);
    setWindowTitle("Animal List");
}

MainWindow::~MainWindow()
{

}

void MainWindow::add_Animal()
{
    //id = (list->size() - 1);
    //dummyAnimal = new Animal (id);
    //list->append(dummyAnimal);
    //id_line->clear();
    //name_line->clear();
    //species_line->clear();
    //paw_line->clear();
    //list->refresh();
    //list->clearSelection();
}

void MainWindow::delete_Animal(int list_index)
{
    //get list selected index
    //delete animal from the animal list based on index
    //list->refresh();
}

void MainWindow::editButton_clicked()
{
    edit_button->hide();

    //dummyAnimal.id = id_line->text()->toInt();
    //dummyAnimal.name = name_line->text();
    //dummyAnimal.species = species_line->text();
    //dummyAnimal.paw_number = paw_line->text()->toInt();
    //enable QLineEdits
    id_line->setEnabled(true);
    name_line->setEnabled(true);
    species_line->setEnabled(true);
    paw_line->setEnabled(true);

    QThread::sleep(2);

    save_button->show();
    cancel_button->show();
}

void MainWindow::saveButton_clicked()
{

    QMessageBox::information(this, "Função Executada", "Função de salvar executada!");

    save_button->hide();
    cancel_button->hide();

    //animal.setID(id_line->text()->toInt());
    //animal.setName(name_line->text());
    //animal.setSpecies(species_line->text());
    //animal.setPawNumber(paw_line->text()->toInt());

    id_line->setEnabled(false);
    name_line->setEnabled(false);
    species_line->setEnabled(false);
    paw_line->setEnabled(false);

    edit_button->show();
}

void MainWindow::cancelButton_clicked()
{

    QMessageBox::information(this, "Função Executada", "Função de cancelar executada!");

    save_button->hide();
    cancel_button->hide();

    id_line->clear();
    name_line->clear();
    species_line->clear();
    paw_line->clear();

    //id_line = dummyAnimal.id;
    //name_line = dummyAnimal.name;
    //species_line = dummyAnimal.species;
    //paw_line = dummyAnimal.paw_number;

    id_line->setEnabled(false);
    name_line->setEnabled(false);
    species_line->setEnabled(false);
    paw_line->setEnabled(false);

    edit_button->show();
}
