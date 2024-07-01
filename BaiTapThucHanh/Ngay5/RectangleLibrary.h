#ifndef H_Rectangle
#define H_Rectangle

#include <iostream>
using namespace std;

class rectangleType
{
    private:
        double length;
        double width;
    
    public:
        void setDimension(double l, double w);
        double getLength() const;
        double getWidth() const;
        double area() const;
        double perimeter() const;
        void print() const;
        rectangleType();
        rectangleType(double l,double w); 
        rectangleType operator+ (const rectangleType&) const;
        bool operator== (const rectangleType&) const;
};

void rectangleType::setDimension(double l, double w)
{
    length = l;
    width = w;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::area() const
{
    return (length*width);
}

double rectangleType::perimeter() const
{
    return 2*(length + width);
}

void rectangleType:: print() const
{
    cout <<"Chieu dai: " << length << endl;
    cout <<"Chieu ngang: " << width << endl;
    cout <<"Dien tich: " << area() << endl;
    cout << "Chu vi: " << perimeter() << endl << endl;
}

rectangleType::rectangleType()
{
    length = 0.0;
    width = 0.0;
}
rectangleType::rectangleType(double l, double w)
{
    length = l;
    width = w;
}

rectangleType rectangleType::operator+ (const rectangleType& RECT) const
{
    rectangleType temp;

    temp.length = length + RECT.length;
    temp.width = width + RECT.length;
    return temp;
}

bool rectangleType::operator== (const rectangleType& RECT) const
{
    if (length == RECT.length && width == RECT.width)
    {
        return 1;
    }
    else return 0;
}

#endif