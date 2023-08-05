#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>

class WrongCat : public WrongAnimal
{
    protected:
        std::string     _type;

    public:
        WrongCat();
        WrongCat( const WrongAnimal & src );
        ~WrongCat(void);

        WrongCat  &operator=( const WrongCat & ref );

        void    makeSound();
        std::string getType();

};

#endif