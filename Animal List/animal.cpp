#include <string>

class Animal
{
private:
    int id;
    std::string name;
    std::string species;
    int paw_number;

public:
    Animal()
    {
        id = 0;
        name = "";
        species = "";
        paw_number = 0;
    }
};
