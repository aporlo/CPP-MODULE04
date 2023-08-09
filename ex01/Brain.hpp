#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string	_ideas[100];

    public:
        Brain( void );
        Brain( Brain const & src );
        ~Brain(void);

        Brain  &operator=( const Brain & ref );
        std::string &getIdea( int i );
        void setIdea(int i, std::string const &src);
};

#endif
