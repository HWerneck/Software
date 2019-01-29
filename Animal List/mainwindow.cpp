#include "mainwindow.h"
#include "animal.h"
#include <QWidget>
#include <QTableView>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget();

    list = new QTableView;
    //list->setModel(model);
    list->setSelectionBehavior(QAbstractItemView::SelectRows);
    list->setShowGrid(false);
    list->setItemDelegate(new DBDelegate(list))

    add_button = new QPushButton(tr("A"));
    add_button->setMinimumSize(30,30);
    add_button->setMaximumSize(30,30);
    delete_button = new QPushButton(tr("D"));
    delete_button->setMinimumSize(30,30);
    delete_button->setMaximumSize(30,30);

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
    name_line->setEnabled(false);
    species_line = new QLineEdit();
    species_line->setMinimumSize(250,30);
    species_line->setEnabled(false);
    type_per_environment = new QComboBox;
    type_per_environment->setMinimumSize(50,30);
    //type_per_environment->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    type_per_environment->addItem("Terrestrial");
    type_per_environment->addItem("Aquatic");
    type_per_environment->addItem("Aerial");
    type_per_environment->setEditable(false);
    type_per_environment->setEnabled(false);

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
    layoutRight3->addWidget(type_per_environment);

    layoutRight = new QVBoxLayout;
    layoutRight->addLayout(layoutRight1);
    layoutRight->addSpacing(5);
    layoutRight->addLayout(layoutRight2);
    layoutRight->addLayout(layoutRight3);
    layoutRight->addStretch();

    layout = new QHBoxLayout;
    layout->addLayout(layoutLeft);
    layout->addLayout(layoutRight);
    
    //create a dummy to hold the object being diplayed
    //dummyAnimal = new Animal(0, Animal, animal animal, 0);
    //otherAnimal = new Animal(0, Dog, Canis lupus familiaris, 4); //for illustration!

    connect(add_button, SIGNAL(clicked()), this, SLOT(add_Animal()));
    connect(delete_button, SIGNAL(clicked()), this, SLOT(check_Animal()));
    connect(edit_button, SIGNAL(clicked()), this, SLOT(editButton_clicked()));
    connect(save_button, SIGNAL(clicked()), this, SLOT(saveButton_clicked()));
    connect(cancel_button, SIGNAL(clicked()), this, SLOT(cancelButton_clicked()));

    widget->setLayout(layout);
    setCentralWidget(widget);
    setWindowTitle("Animal List");
}

MainWindow::~MainWindow()
{

}

void MainWindow::add_Animal()
{
    //add animal to data
    //remake model
    //list->refresh();
    
    //id = (list->size() - 1);
    //dummyAnimal = new Animal (id);
    //list->append(dummyAnimal);
    
    //id_line->clear();
    //name_line->clear();
    //species_line->clear();
    //type_per_environment->set(0);
    
    //list->refresh();
    //list->clearSelection();
}

void MainWindow::check_Animal()
{
    int num = list->currentIndex().row();
    if (num < 0)
    {
        QMessageBox::warning(this, "Animal List", "No animal selected!");
    }
    else
    {
        delete_Animal(num);
    }
}

void MainWindow::delete_Animal(int list_index)
{
    //delete animal from the animal list based on index
    //remake model based on data
    //list->refresh();
}

void MainWindow::editButton_clicked()
{
    edit_button->hide();

    //dummyAnimal.id = id_line->text()->toInt();
    //dummyAnimal.name = name_line->text();
    //dummyAnimal.species = species_line->text();
    
    //enable QLineEdits
    id_line->setEnabled(true);
    name_line->setEnabled(true);
    species_line->setEnabled(true);
    type_per_environment->setEnabled(true);

    save_button->show();
    cancel_button->show();
}

void MainWindow::saveButton_clicked()
{
    save_button->hide();
    cancel_button->hide();

    //change data on file;
    //animal.setID(id_line->text()->toInt());
    //animal.setName(name_line->text());
    //animal.setSpecies(species_line->text());
    //animal.setPawNumber(paw_line->text()->toInt());

    id_line->setEnabled(false);
    name_line->setEnabled(false);
    species_line->setEnabled(false);
    type_per_environment->setEnabled(false);

    edit_button->show();
}

void MainWindow::cancelButton_clicked()
{
    save_button->hide();
    cancel_button->hide();

    id_line->clear();
    name_line->clear();
    species_line->clear();
    //type_per_environment->set(0);

    //id_line = dummyAnimal.id;
    //name_line = dummyAnimal.name;
    //species_line = dummyAnimal.species;

    id_line->setEnabled(false);
    name_line->setEnabled(false);
    species_line->setEnabled(false);
    type_per_environment->setEnabled(false);

    edit_button->show();
}

/*void MainWindow::updateTableView()
{

}*/
