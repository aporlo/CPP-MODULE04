#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:
        std::string     _type;

    public:
        WrongCat();
        WrongCat( WrongCat & src );
        ~WrongCat(void);

        WrongCat  &operator=( const WrongCat & ref );

       virtual void    makeSound( void ) const;
        std::string getType();

};

#endif
