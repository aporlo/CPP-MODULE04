#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string     _type;

    public:
        Animal();
        Animal( const Animal & src );
        ~Animal(void);

        Animal  &operator=( const Animal & ref );

        void    makeSound();
        std::string getType();

};

#endif