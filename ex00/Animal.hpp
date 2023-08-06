#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string     _type;

    public:
        Animal();
        Animal( Animal & src );
        virtual ~Animal(void);

        Animal  &operator=( const Animal & ref );

        virtual void    makeSound( void ) const;
        std::string getType( void ) const;

};

#endif
