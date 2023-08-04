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
        Fixed( const double num);
        float   toFloat( void ) const;
        int     toInt( void ) const;
        friend  std::ostream& operator<<(std::ostream& os, const Fixed& copy);
        ////// EX 02 //////
        Fixed   operator*( const Fixed& other);
        Fixed   operator+( const Fixed& other);
        Fixed   operator-( const Fixed& other);
        Fixed   operator/( const Fixed& other);
        Fixed&   operator++();
        Fixed   operator++(int);
        Fixed&   operator--();
        Fixed   operator--(int);
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


        bool checkRounded();


};

