#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    protected:
        std::string     _type;

    public:
        Dog( void );
        Dog( Dog & src );
        ~Dog(void);

        Dog  &operator=( const Dog & ref );

        virtual void    makeSound( void ) const;
        // std::string getType();

};

#endif
