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
        Fixed&  operator=(const Fixed &copy);
        int     getRawBits( void )const;
        void    setRawBits ( int const raw );
        ///// EX 01 /////
        Fixed( const int num );
        Fixed( const float num);
        float   toFloat( void ) const;
        int     toInt( void ) const;
        ////// EX 02 //////
        const Fixed   operator*( const Fixed& other) const;
        const Fixed   operator+( const Fixed& other) const;
        const Fixed   operator-( const Fixed& other) const;
        const Fixed   operator/( const Fixed& other) const;
        const Fixed&   operator++();
        const Fixed   operator++(int);
        const Fixed&   operator--();
        const Fixed   operator--(int);
        bool    operator>(const Fixed& other) const;
        bool    operator<(const Fixed& other) const;
        bool    operator>=(const Fixed& other) const;
        bool    operator<=(const Fixed& other) const;
        bool    operator==(const Fixed& other) const;
        bool    operator!=(const Fixed& other) const;
        static  Fixed&   min(Fixed &num1, Fixed &num2);
        static  Fixed&   max(Fixed &num1, Fixed &num2);
        static const Fixed&   min(const Fixed &num1, const Fixed &num2);
        static const Fixed&   max(const Fixed &num1, const Fixed &num2);

        ///// EX 03 ////////





};

        std::ostream& operator<<(std::ostream& os, const Fixed& copy);
