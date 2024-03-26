#include <iostream>
using namespace std;

class Shape
{
protected:
    int width, height;
public:
    Shape( int a = 0, int b = 0)
    {
        width = 0;
        height = 0;
    }
    virtual int area() = 0;
};

class Triangle : public Shape
{
public:
    Triangle (int a = 0, int b = 0) : Shape(a, b) {};
    int area()
    {
        cout << "Triangle class area :" <<endl;
        return (width * height)/2;
    } 
};

class Rectangle : public Shape
{
public:
    Rectangle (int a = 0, int b = 0) : Shape(a, b) {};
    int area()
    {
        cout << "Rectangle class area :" <<endl;
        return width * height;
    } 
};

int main()
{
    Shape *shape;
    Rectangle rec(10, 15);
    Triangle tri(10, 12);

    shape = &rec;
    shape->area();
    shape = &tri;
    shape->area();

    return 0;
}

