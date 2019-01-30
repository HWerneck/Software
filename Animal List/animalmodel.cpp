#include "animalmodel.h"

AnimalModel::AnimalModel(QObject *parent) :
	QAbstractTableModel(parent)
{
}

int AnimalModel::rowCount(const QModelIndex & /* parent */) const
{
	return animal_names.count();
}

int AnimalModel::columnCount(const QModelIndex & /* parent */) const
{
	return 2;
}

QVariant AnimalModel::data(const QModelIndex &index, int role) const
{
	if (!index.isValid())
	{
		return QVariant();
	}
	
	if (role == Qt::DisplayRole)
	{
		if (index.column == 0)
		{
			int id = index.row() + 1;
			QString animal_id = QString::number(id);
			return animal_id;
		}
		else if (index.column == 1)
		{
			return animal_names.at(index.row());
		}
	}
	else if (role == Qt::DecorationRole)
	{
		return QIcon animal_types1.at(index.row());
	}
	return QVariant();
}

QVariant AnimalModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	//No vertical header available
	/*if (orientation::Qt vertical)
		return QVariant();*/
	if (role != Qt::DisplayRole)
		return QVariant();
	//return header data once I figur it out
}
