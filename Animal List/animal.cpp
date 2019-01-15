#include <QString>

class Animal
{
    int id;
    QString name;
    QString species;
    int paw_number;

public:
    Animal(int animal_id)
    {
        id = animal_id;
        name = "Animal";
        species = "Animal animale";
        paw_number = 0;
    }
    
    int getID()
    {
        return id;
    }
    
    void setID(animal_id)
    {
        id = animal_id;
    }
    
    QString getName()
    {
        return name;
    }
    
    void setName(QString animal_name)
    {
        name = animal_name;
    }
    
    QString getSpecies()
    {
        return species;
    }
    
    void setSpecies(QString animal_species)
    {
        species = animal_species;
    }
    
    int getPawNumber()
    {
        return paw_number;
    }
    
    void setPawNumber(QString animal_paw)
    {
        paw_number = animal_paw;
    }
};
