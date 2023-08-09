#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)
{
	std::cout <<"Copy constructor for WrongAnimal called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal is destroyed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & ref)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != & ref)
		*this = ref;
	return (*this);
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal : none" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return this->_type;
}
