#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
class Animal
{
    protected:
        std::string     _type;

    public:
        Animal();
        Animal( Animal const & src );
        virtual ~Animal(void);

        Animal  &operator=(const Animal & ref );

        virtual void    makeSound( void ) const;
        virtual std::string getType( void ) const;

};

#endif
