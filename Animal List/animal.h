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

private:
    int id;
    QString name;
    QString species;
    int type; //enum
    //QIcon icon;
    //BodyPart body_part;
};

#endif // ANIMAL_H
