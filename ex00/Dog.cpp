#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog & src) : Animal( src )
{
	std::cout <<"Copy constructor for cat called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog is destroyed" << std::endl;
	return;
}

Dog & Dog::operator=(Dog const & ref)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != & ref)
		*this = ref;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout	<< " bark bark " << std::endl;
}
