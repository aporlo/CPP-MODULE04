#include "Dog.hpp"

Dog::Dog( void )
{
	_type = "Dog";
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

Dog & Dog::operator=(Dog const & ref)
{
	std::cout << "Dog assignment operator called" << std::endl;
	_type = ref.getType();
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout	<< " bark bark " << std::endl;
}
