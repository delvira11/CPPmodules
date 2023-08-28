#include <iostream>

class Fixed
{
    private:
        int                 pointint;
        static const int    fracbits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed( Fixed const &copy );
        Fixed& operator=(const Fixed &copy);
        int getRawBits( void )const;
        void setRawBits ( int const raw );
        ///// EX 01 /////
        Fixed( const int num );
        Fixed( const float num);
        float   toFloat( void ) const;
        int     toInt( void ) const;

};
        std::ostream& operator<<(std::ostream& os, const Fixed& copy);
