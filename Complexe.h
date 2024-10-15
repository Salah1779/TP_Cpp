#pragma once
using namespace std;

class Complexe
{
	double Re;
	double Img;

public:
	Complexe();
	Complexe(double, double);
    Complexe(const Complexe&);
	void afficher() const;
	Complexe conjugate() const;
	double module() const;
	Complexe operator+(const Complexe&) const;
	Complexe operator-(const Complexe&) const;
	Complexe operator*(const Complexe&) const;
	Complexe operator*(double) const;
	bool operator==(const Complexe&) const;
	Complexe& operator/(const Complexe&) ;
	


};

