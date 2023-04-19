#include "Fixed.hpp"

Fixed::Fixed()
{
    pointint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed &copy)
{
    std::cout << "Asignation operator called" << std::endl;
    this->pointint = copy.getRawBits();
    return(*this);
}

Fixed::Fixed( Fixed &copy )
{
    std::cout << "Copy constructor called" << std::endl;

    pointint = copy.getRawBits();
}

int Fixed::getRawBits( void )const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->pointint);
}

void Fixed::setRawBits ( int const raw )
{
    pointint = raw;
}