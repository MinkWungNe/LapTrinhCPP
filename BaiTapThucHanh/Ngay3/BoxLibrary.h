#ifndef H_Box
#define H_Box

#include "RectangleLibrary.h"
#include <iostream>
using namespace std;

class boxType: public rectangleType
{
    private:
        double height;
    
    public:
        void setDimension(double l, double w, double h);
        double getHeight() const;
        double area() const;                                    //Dien Tich
        double volume() const;                                  //The tich
        void print() const;
        boxType();
        boxType(double l, double w, double h);
};

void boxType::setDimension(double l, double w, double h)
{
    rectangleType::setDimension(l,w);
    if(h >= 0)
    {
        height = h;
    }
    else 
    {
        height = 0.0;
    }
}

double boxType::getHeight() const 
{
    return height;
}

double boxType::area() const
{
    return 2*(getLength()*getWidth() + getLength()*height + getWidth()*height);
}

double boxType::volume() const
{
    return rectangleType::area()* height;           //or return( getLength() * getWidth * height )
}

void boxType::print() const
{
    cout << "Chieu dai: " << getLength() << endl;
    cout << "Chieu rong: " << getWidth() << endl;
    cout << "Chieu cao: " << height << endl;
    cout << "Dien tich: " << area() << endl;
    cout << "The tich: " << volume() << endl << endl;
}

boxType::boxType():rectangleType()
{
    height = 0.0;
}

boxType::boxType(double l, double w, double h):rectangleType(l,w)
{
    height = h;
}

#endif