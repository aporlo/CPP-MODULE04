#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat &src) : Animal( src )
{
	std::cout <<"Copy constructor for cat called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat is destroyed" << std::endl;
	return;
}

Cat & Cat::operator=(Cat const & ref)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &ref)
		return (*this);
	this->_type = ref._type;
	this->_brain = ref._brain;
	std::cout << this->_type << std::endl;
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

Brain	*Cat::getBrain( void ) const
{
	return (this->_brain);
}
