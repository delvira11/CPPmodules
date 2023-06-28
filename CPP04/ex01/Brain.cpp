#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain &copy)
{
    std::cout << "Brain assignment operator called" << std::endl;
    return copy;
}