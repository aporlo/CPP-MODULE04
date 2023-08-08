#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string	_ideas[100];

    public:
        Brain( void );
        Brain( Brain & src );
        ~Brain(void);

        Brain  &operator=( const Brain & ref );
        std::string &getIdea( int i );
};

#endif
