#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain( void );
        Brain( Brain & src );
        ~Brain(void);

        Brain  &operator=( const Brain & ref );
		std::string	_ideas[100];
};

#endif
