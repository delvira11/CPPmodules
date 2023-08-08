#include "whatever.hpp"

int main()
{

    int a;
    int b;

    a = 241;
    b = 14214;


    std::cout << "a = "<< a << std::endl;
    std::cout << "b = "<< b << std::endl;

    swap(a, b);

    std::cout << "swapped a = "<< a << std::endl;
    std::cout << "swapped b = "<< b << std::endl;

    std::cout << "min: " << min(a, b) << std::endl;
    std::cout << "max: " << max(a, b) << std::endl;


    char c = 'g';
    char d = 'b';

    std::cout << "c = "<< c << std::endl;
    std::cout << "d = "<< d << std::endl;

    swap(a, b);

    std::cout << "swapped c = "<< c << std::endl;
    std::cout << "swapped b = "<< d << std::endl;

    std::cout << "min: " << min(c, d) << std::endl;
    std::cout << "max: " << max(c, d) << std::endl;

/*
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
*/
}