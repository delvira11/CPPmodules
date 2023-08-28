#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
 
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "--------------------------------" << std::endl;

    Fixed c(10);
    Fixed d(5.5f);

    std::cout << "result  = " << (c - d) << std::endl;
    std::cout << "result  = " << (c > d) << std::endl;
    return 0;
}