#pragma once
class Point
{
private:
	double x;
	double y;

public:

	Point();
	Point(double, double);
	Point(const Point&);
	~Point();
	void translater(double dx, double dy);
	void afficher() const;
	double distance(const Point&) const ;
	bool operator==(const Point&);
	
};
