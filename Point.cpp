#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
	this->x = 0.0;
	this->y = 0.0;
}

Point::Point(double x1, double y1) :x(x1), y(y1)
{
}


Point::Point(const Point& P)
{
	cout << "constru de recopie point" << endl;
	this->x = P.x;
	this->y = P.y;
}

Point::~Point()
{
	cout << "destric point" << endl;
}

void Point::translater(double dx, double dy)
{
	this->x = x + dx;
	this->y = y + dy;


}

void Point::afficher() const
{

	cout << "  x=" << this->x << endl;

	cout << "  y=" << this->y << endl;
	cout << '\n';
}

double Point::distance(const Point& p) const
{

	return sqrt(pow((this->x - p.x), 2) + pow((this->y - p.y), 2));
}

bool Point::operator==(const Point& p)
{
	return (this->x == p.x && this->y == p.y);
}




