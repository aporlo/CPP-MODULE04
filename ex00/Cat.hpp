#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    protected:
        std::string     _type;

    public:
        Cat( void );
        Cat( Cat const & src );
        ~Cat(void);

        Cat & operator=(Cat const & ref);
        std::string getType( void ) const;
        virtual void    makeSound( void ) const;
};

#endif
