#include <string>

class Animal
{
    int id;
    std::string name;
    std::string species;
    int paw_number;

public:
    Animal()
    {
        id = 0;
        name = "Animal";
        species = "Animal animale";
        paw_number = 0;
    }
    
    int getID()
    {
        return id;
    }
    
    void setID()
    {
    }
    
    std::string getName()
    {
        return name;
    }
    
    void setName()
    {
    }
    
    std::string getSpecies()
    {
        return species;
    }
    
    void setSpecies()
    {
    }
    
    int getPawNumber()
    {
        return paw_number;
    }
    
    void setPawNumber()
    {
    }
};
