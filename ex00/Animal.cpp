#include "Animal.hpp"

Animal::Animal(): _type("")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal const & src)
{
    std::cout <<"Copy constructor for Animal called" << std::endl;
    *this =  src;
}

Animal::~Animal( void )
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator=( const Animal & ref)
{
    std::cout << "Animal assignment operator called" << std::endl;
	this->_type = ref.getType();
	return (*this);
}

void    Animal::makeSound( void ) const
{
    std::cout << "Animal : none " << std::endl;
}

std::string Animal::getType( void ) const
{
    return this->_type;
}
