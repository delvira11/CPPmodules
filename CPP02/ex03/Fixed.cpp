#include "Fixed.hpp"
#include <iomanip>
#include <cmath>

void printBits(unsigned int num) {
    for (int bit = 31; bit >= 0; --bit) {
        std::cout << ((num >> bit) & 1);
    }
    std::cout << std::endl;
}

Fixed::Fixed()
{
    pointint = 0;
    //std::cout << "Default constructor called" << std::endl;

}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;

}

Fixed& Fixed::operator=(const Fixed &copy)
{
    //std::cout << "Asignation operator called" << std::endl;
    this->pointint = copy.pointint;
    return(*this);
}

Fixed::Fixed( Fixed const &copy )
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

int Fixed::getRawBits( void )const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->pointint);
}

void Fixed::setRawBits ( int const raw )
{
    pointint = raw;
}

/////// EX 01 ////////



Fixed::Fixed( const int num)
{
    //std::cout << "Int constructor called" << std::endl;
    this->pointint = num;
    this->pointint = this->pointint << this->fracbits;

}



Fixed::Fixed( const float num)
{
    //std::cout << "Float constructor called" << std::endl;
    this->pointint = num;

    // MOVER 8 BITS LA PARTE ENTERA
    this->pointint = this->pointint << this->fracbits;
    //printBits(this->pointint);
    //MOVER LA PARTE DECIMAL
    float partedec = num - (int)num;
    int i = 0;
    while (i < this->fracbits)
    {
        partedec = partedec * 2;
        i++;
    }
    //std::cout << partedec << std::endl;
    // // // AÑADIR LOS BITS DE LA PARTE DECIMAL A LA DERECHA DE EL ENTERO
    this->pointint += partedec;
    //printBits(this->pointint);
    //PONER EL PUNTO

}

float Fixed::toFloat( void ) const
{
    int exp = -1;
    int fpointint = this->pointint;
    float value = 0;

    // std::cout << "IIIIIS " << value << std::endl;
    //printBits(fpointint);
    for (int bit = 7; bit >= 0; --bit)
    {
        value += (((fpointint >> bit) & 1) * pow(2, exp));
        exp--;
    }
    fpointint = fpointint >> this->fracbits;
    value += fpointint;
    //fpointint = fpointint << this->fracbits;
    //printBits(fpointint);

    //value += fpointint;
    //std::cout << std::fixed << std::setprecision(2) << value << std::endl;
    return (value);
}

int Fixed::toInt( void ) const
{
    int ipointint = this->pointint;

    ipointint = ipointint >> this->fracbits;
    ipointint = (int) ipointint;
    return (ipointint);
}

std::ostream& operator<<(std::ostream& os, const Fixed& copy)
{
    os << copy.toFloat();
    return os;
}

///////// EX02 //////////////////////

const Fixed Fixed::operator*( const Fixed &other) const
{
    Fixed result;

    // std::cout << this->toFloat() << std::endl;
    // std::cout << other.toFloat() << std::endl;
    result.pointint = Fixed(this->toFloat() * other.toFloat()).getRawBits();

    return (result);
}
const Fixed Fixed::operator+( const Fixed &other) const
{
    Fixed result;

    // std::cout << this->toFloat() << std::endl;
    // std::cout << other.toFloat() << std::endl;
    result.pointint = Fixed(this->toFloat() + other.toFloat()).getRawBits();

    return (result);
}
const Fixed Fixed::operator-( const Fixed &other) const
{
    Fixed result;

    // std::cout << this->toFloat() << std::endl;
    // std::cout << other.toFloat() << std::endl;
    result.pointint = Fixed(this->toFloat() - other.toFloat()).getRawBits();

    return (result);
}
const Fixed Fixed::operator/( const Fixed &other)const
{
    Fixed result;

    // std::cout << this->toFloat() << std::endl;
    // std::cout << other.toFloat() << std::endl;
    result.pointint = Fixed(this->toFloat() / other.toFloat()).getRawBits();
    // result.pointint = result.pointint << this->fracbits;

     return (result);
}

const Fixed& Fixed::operator++()
{

    this->pointint += 1;
    return (*this);
}

const Fixed   Fixed::operator++(int)
{
    Fixed copy(*this);

    this->pointint += 1;

    return (copy);
}

const Fixed& Fixed::operator--()
{

    this->pointint -= 1;
    return (*this);
}

const Fixed   Fixed::operator--(int)
{
    Fixed copy(*this);

    this->pointint -= 1;

    return (copy);
}

bool    Fixed::operator>(const Fixed& other) const
{
    if (this->toFloat() > other.toFloat())
        return ( true );
    else
        return ( false );
}

bool    Fixed::operator<(const Fixed& other) const
{
    if (this->toFloat() < other.toFloat())
        return ( true );
    else
        return ( false );
}

bool    Fixed::operator>=(const Fixed& other) const
{
    if (this->toFloat() >= other.toFloat())
        return ( true );
    else
        return ( false );
}

bool    Fixed::operator<=(const Fixed& other) const
{
    if (this->toFloat() <= other.toFloat())
        return ( true );
    else
        return ( false );
}

bool    Fixed::operator==(const Fixed& other) const
{
    if (this->toFloat() == other.toFloat())
        return ( true );
    else
        return ( false );
}

bool    Fixed::operator!=(const Fixed& other) const
{
    if (this->toFloat() != other.toFloat())
        return ( true );
    else
        return ( false );
}

const Fixed&   Fixed::min(const Fixed &num1, const Fixed& num2)
{
    if (num1 <= num2)
        return(num1);
    else
        return(num2);
}

const Fixed&   Fixed::max(const Fixed &num1, const Fixed& num2)
{
    if (num1 >= num2)
        return(num1);
    else
        return(num2);
}


/////// EX 03 ////////


