#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:
        std::string     _type;

    public:
        WrongCat();
        WrongCat( WrongCat const & src );
        ~WrongCat(void);

        WrongCat  &operator=( const WrongCat & ref );
        void    makeSound( void ) const;

};

#endif
