#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string     _type;

    public:
        WrongAnimal();
        WrongAnimal( WrongAnimal & src );
        virtual ~WrongAnimal(void);

        WrongAnimal  &operator=( const WrongAnimal & ref );

        virtual void    makeSound( void ) const;
        std::string getType( void ) const;

};

#endif
