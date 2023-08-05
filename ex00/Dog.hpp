#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

class Dog : public Animal
{
    protected:
        std::string     _type;

    public:
        Dog();
        Dog( const Dog & src );
        ~Dog(void);

        Dog  &operator=( const Dog & ref );

        void    makeSound();
        std::string getType();

};

#endif