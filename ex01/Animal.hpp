#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string     _type;

    public:
        Animal( void );
        Animal( Animal const & src );
        virtual ~Animal(void);

        Animal  &operator=( const Animal & ref );

        virtual void    makeSound( void ) const;
        virtual Brain	*getBrain( void ) const = 0;
        virtual std::string getType( void ) const;

};

std::ostream	&operator<<( std::ostream &out, const Animal &instance );

#endif
