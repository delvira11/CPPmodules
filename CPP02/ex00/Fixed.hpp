#include <iostream>

class Fixed
{
    private:
        int                 pointint;
        static const int    fracbits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed( Fixed &copy );
        /////////
        Fixed& operator=(Fixed &copy);
        int getRawBits( void )const;
        void setRawBits ( int const raw );

};

std::ostream& operator<<(std::ostream& os, const Fixed& copy);