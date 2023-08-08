#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog & src) : Animal( )
{
	std::cout <<"Copy constructor for Dog called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog is destroyed" << std::endl;
	return;
}

Dog & Dog::operator=(Dog & ref)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &ref)
		this->_type = ref.getType();
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout	<< " bark bark " << std::endl;
}

std::string Dog::getType( void ) const
{
    return this->_type;
}
