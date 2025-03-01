#include <iostream>

class Point
{
public:
    Point() {}
    Point(int x, int y): xval(x), yval(y) {}
    int x() const {return xval;}
    int y() const {return yval;}
    Point& x(int xv) {xval = xv; return *this;}
    Point& y(int yv) {yval = yv; return *this;}

private:
    int xval{0}, yval{0};
};