#ifndef ANIMAL_H;
#define ANIMAL_H

#include <string>
class Animal{
    public:
    Animal();
    Animal(const Animal& orig);
    virtual ~Animal();
    std::string name();
    private:

    
};

#endif