#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal 
{
    protected:
        std::string     _type;

    public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal & src );
        ~WrongAnimal(void);

        WrongAnimal  &operator=( const WrongAnimal & ref );

        void    makeSound();
        std::string getType();

};

#endif