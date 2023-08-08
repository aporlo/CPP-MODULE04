#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    protected:
        std::string     _type;

    public:
        Dog( void );
        Dog( Dog & src );
        virtual ~Dog(void);

        Dog  &operator=( const Dog & ref );

        virtual void    makeSound( void ) const;
        virtual Brain *getBrain( void ) const;
        std::string getType( void ) const;

    private:
		Brain		*_brain;

};

#endif
