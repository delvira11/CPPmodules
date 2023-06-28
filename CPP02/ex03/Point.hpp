#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        ~Point();

};

Point::Point() : x(0), y(0)
{
}

Point::~Point()
{
    
}
