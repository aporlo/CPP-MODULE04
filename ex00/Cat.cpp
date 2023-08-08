#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat & src) : Animal( )
{
	std::cout <<"Copy constructor for cat called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat is destroyed" << std::endl;
	return;
}

Cat & Cat::operator=(Cat & ref)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &ref)
		this->_type = ref.getType();
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout	<< " meow meow " << std::endl;
}

std::string Cat::getType( void ) const
{
    return this->_type;
}
