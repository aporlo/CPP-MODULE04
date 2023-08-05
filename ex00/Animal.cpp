#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal const & src)
{
    this->_type = src._type;
}

Animal::~Animal( void )
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator=( Animal const & ref)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &ref)
        *this = ref;
    return (*this);
}

void    Animal::makeSound()
{
    std::cout << "Animal::[none]" << std::endl;
}

std::string Animal::getType()
{
    return this->_type = _type;
}