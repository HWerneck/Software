#ifndef ANIMAL_H
#define ANIMAL_H

#include "animal.h"
#include <QString>

enum Type
{
    Terrestrial = 0,
    Aquatic = 1,
    Aerial = 2
};

class Animal
{
public:
    Animal(int id);
    ~Animal();
    int getID();
    void setID(int animal_id);
    QString getName();
    void setName(QString animal_name);
    QString getSpecies();
    void setSpecies(QString animal_species);
    int getType();
    void setType(int animal_type);

private:
    int id;
    QString name;
    QString species;
    int type; //enum
    //QIcon icon;
    //BodyPart body_part;
};

#endif // ANIMAL_H
