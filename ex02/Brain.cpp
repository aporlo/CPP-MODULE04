#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = src;
}

Brain::~Brain( void )
{
	std::cout << "Destructor for Brain called" << std::endl;
}

Brain & Brain::operator=( const Brain & ref )
{
	std::cout << "Assignment operator for Brain called" << std::endl;
	if (this == &ref)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	return *this;
}

std::string	&Brain::getIdea(int i)
{
	if (i < 100 && i >= 0)
		return (this->_ideas[i]);
	return (this->_ideas[i % 99]);
}

void  Brain::setIdea(int i, std::string const &src)
{
	this->_ideas[i] = src;
}
