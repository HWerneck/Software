#include "animal.h"
#include <QString>

Animal::Animal(int id) :
    id (id), name (""), species (""), type (Type::Terrestrial)
{

}

Animal::~Animal()
{

}

int Animal::getID()
{
    return this->id;
}

void Animal::setID(int animal_id)
{
    this->id = animal_id;
}

QString Animal::getName()
{
    return this->name;
}

void Animal::setName(QString animal_name)
{
    this->name = animal_name;
}

QString Animal::getSpecies()
{
    return this->species;
}

void Animal::setSpecies(QString animal_species)
{
    this->species = animal_species;
}

int Animal::getType()
{
    return this->type;
}

void Animal::setType(int animal_type)
{
    this->type = animal_type;
}
