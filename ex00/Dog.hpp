#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    protected:
        std::string     _type;

    public:
        Dog( void );
        Dog( Dog const & src );
        ~Dog(void);

        Dog  &operator=( Dog const & ref );
        std::string getType( void ) const;
        virtual void    makeSound( void ) const;

};

#endif
