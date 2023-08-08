#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog & src) : Animal( src )
{
	std::cout <<"Copy constructor for Dog called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog is destroyed" << std::endl;
	return;
}

Dog & Dog::operator=(Dog const & ref)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this == &ref)
		return (*this);
	this->_type = ref._type;
	this->_brain = ref._brain;
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

Brain	*Dog::getBrain( void ) const
{
	return (this->_brain);
}
