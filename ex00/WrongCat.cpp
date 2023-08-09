#include "WrongCat.hpp"

WrongCat::WrongCat () : WrongAnimal()
{
	this->_type = "Cat";
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src) : WrongAnimal(src)
{
	std::cout <<"Copy constructor for WrongCat called" << std::endl;
	this->_type = src._type;
	return;
}

WrongCat & WrongCat::operator=(const WrongCat & ref)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != & ref)
		*this = ref;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is destroyed" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout	<< " WrongCat " << std::endl;
}
