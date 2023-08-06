#include "Cat.hpp"

Cat::Cat( void ) : _type("Cat")
{
	// this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat &src) : Animal( src )
{
	std::cout <<"Copy constructor for cat called" << std::endl;
	this->_type = src._type;
}

Cat::~Cat(void)
{
	std::cout << "Cat is destroyed" << std::endl;
	return;
}

Cat & Cat::operator=(Cat const & ref)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != & ref)
		*this = ref;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout	<< " meow meow " << std::endl;
}
