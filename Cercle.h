#pragma once
#include"Point.h"

class Cercle
{
private:
	const static double pi;
	double rayon;
	Point * centre;

public:
	Cercle(double r, Point* p);
	~Cercle();
	void afficher() const;
	void updateR(double);
	void translater(double , double);
	bool operator==(const Cercle&);
	double surface() const;
	double primetre() const;
};

