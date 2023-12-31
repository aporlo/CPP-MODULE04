#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    protected:
        std::string     _type;

    public:
        Cat( void );
        Cat( Cat const & src );
        virtual ~Cat(void);

        Cat  &operator=( const Cat & ref );

        virtual void    makeSound( void ) const;
        virtual Brain *getBrain( void ) const;
        std::string getType( void ) const;

    private:
		Brain		*_brain;

};

#endif
