#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>

class Cat : public Animal
{
    protected:
        std::string     _type;

    public:
        Cat();
        Cat( const Animal & src );
        ~Cat(void);

        Cat  &operator=( const Cat & ref );

        void    makeSound();
        std::string getType();

};

#endif