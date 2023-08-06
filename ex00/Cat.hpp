#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    protected:
        std::string     _type;

    public:
        Cat( void );
        Cat( Cat & src );
        ~Cat(void);

        Cat  &operator=( const Cat & ref );

        virtual void    makeSound( void ) const;
        std::string getType();

};

#endif
