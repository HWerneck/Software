#include "mainwindow.h"
#include <QWidget>
#include <QListWidget>
#include <QStackedWidget>
#include <QStackedLayout>
#include <QHBoxLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget();

    list = new QListWidget;
    list->addItem(tr("Dragon"));
    list->addItem(tr("Tiger"));
    list->addItem(tr("Elephant"));
    list->addItem(tr("Dog"));
    list->addItem(tr("Wolf"));
    list->setMinimumHeight(200);
    list->minimumHeight();
    list->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);

    stackedDragon = new QStackedWidget();
    labelDragon = new QLabel(tr("Black"));
    stackedDragon->addWidget(labelDragon);
    stackedTiger = new QStackedWidget();
    labelTiger = new QLabel(tr("Orange Yellow"));
    stackedTiger->addWidget(labelTiger);
    stackedElephant = new QStackedWidget();
    labelElephant = new QLabel(tr("Gray"));
    stackedElephant->addWidget(labelElephant);
    stackedDog = new QStackedWidget();
    labelDog = new QLabel(tr("Brown"));
    stackedDog->addWidget(labelDog);
    stackedWolf = new QStackedWidget();
    labelWolf = new QLabel(tr("White"));
    stackedWolf->addWidget(labelWolf);

    stacked = new QStackedLayout;
    stacked->addWidget(stackedDragon);
    stacked->addWidget(stackedTiger);
    stacked->addWidget(stackedElephant);
    stacked->addWidget(stackedDog);
    stacked->addWidget(stackedWolf);

    connect(list, SIGNAL(currentRowChanged(int)), stacked, SLOT(setCurrentIndex(int)));

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(list);
    layout->addLayout(stacked);

    widget->setLayout(layout);
    setCentralWidget(widget);
    setWindowTitle("Animal List");
}

MainWindow::~MainWindow()
{

}
