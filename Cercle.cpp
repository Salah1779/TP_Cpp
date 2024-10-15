#include "Cercle.h"
#include<cmath>
#include"Point.h"
using namespace std;
#include<iostream>


const double Cercle::pi = 3.14;



Cercle::Cercle(double r, Point *p) :rayon(r), centre(p)
{
}


Cercle::~Cercle()
{
	cout << "destruc cercle" << endl;
}

void Cercle::afficher() const
{
	cout << "rayon :" << this->rayon << endl;

	cout << "centre :" << endl;

	 this->centre->afficher();
}

void Cercle::updateR(double dr)
{
	this->rayon += dr;
}

void Cercle::translater(double dx, double dy) 
{
	this->centre->translater(dx, dy);
}

bool Cercle::operator==(const Cercle& c)
{
	return this->centre == c.centre && this->rayon == c.rayon;
}

double Cercle::surface() const
{
	return pow(this->rayon, 2) * pi;
}


double Cercle::primetre() const
{
	return 2 * pi * this->rayon;
}
















