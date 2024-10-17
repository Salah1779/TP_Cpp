#include "Complexe.h"
#include <iostream>
using namespace std;



Complexe::Complexe()
{
	this->Img = 0.0;
	this->Re = 0.0;
}

Complexe::Complexe(double re=0.0 , double img=0.0 ) {
	this->Re = re;
	this->Img = img;

}

Complexe::Complexe(const Complexe& C) {
	this->Re = C.Re;
	this->Img = C.Img;

}

void Complexe::afficher()const
{
	cout << "Complexe : " << this->Re ;
	this->Img >=0 ? cout << " + i" << this->Img << endl : cout << " - i" << -this->Img << endl;


}

Complexe Complexe:: operator+(const Complexe& z) const  {
	
	return Complexe(this->Re + z.Re,this->Img + z.Img);
	

}

Complexe Complexe:: operator-(const Complexe& z) const {
	
	return Complexe(this->Re - z.Re, this->Img - z.Img);


}

Complexe Complexe:: operator*(const Complexe& z) const {
	return Complexe(this->Re * z.Re - this->Img * z.Img, this->Re * z.Img + this->Img * this->Re);


}

Complexe Complexe::operator*(double c) const
{
	return Complexe(c*this->Re,c*this->Img);
}

bool Complexe::operator==(const Complexe& c) const
{
	return (this->Re==c.Re && this->Img==c.Img);
}

Complexe Complexe::conjugate() const {
	return Complexe(this->Re , this->Img ==0 ? this->Img : -this->Img);
}

double Complexe::module() const
{
	return sqrt(this->Re *this->Re + this->Img * this->Img);
}


Complexe& Complexe:: operator/(const Complexe& z) {

	if (z.Img == 0 && z.Re == 0) {
	  cout << "Erreur ! , Devision par ZERO.." << endl;
	  
	}
	else if (z.Img == 0) {
		this->Re /= z.Re;
		this->Img /= z.Re;
	}
	else {
		Complexe num = (*this) * z.conjugate();
		double denom = z.Re * z.Re + z.Img * z.Img;

		this->Re = num.Re / denom;
		this->Img = num.Img / denom;
	}

	return *this;
}

Complexe& Complexe::operator/(const double r)
{
	if (r == 0) {
		cout << "Erreur ! , Devision par ZERO.." << endl;
	
	}
	else {
		this->Re /= r;
		this->Img /= r;
	}
	return *this;
}


