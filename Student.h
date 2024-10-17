#pragma once
#include <string>


class Student
{
private:
	static int counter ;
    int id ;
	std::string fullname;
	std::string cne;

public:
	Student();
	Student(std::string, std::string);
	Student(const Student&);
	~Student();

	void afficher_student() const;

};

