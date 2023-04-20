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

Point::Point()
{
    Fixed const a (0);
    Fixed const b (0);

    this->x = a;
    // this->y = b;
}

Point::~Point()
{
}
