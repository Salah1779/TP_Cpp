#include "Student.h"
#include<iostream>
using namespace std;

int Student::counter = 0;

Student::Student() : id(-1), fullname(""), cne("") {}


Student::Student(string name, string mtr)
    : fullname(name), cne(mtr)
{
    counter++;
    id = counter-1;
}

Student::Student(const Student& other)
    : id(other.id), fullname(other.fullname), cne(other.cne) {}

Student::~Student() {}

void Student::afficher_student() const {

    cout << "ID: " << this->id << ", Nom: " << this->fullname << ", CNE: " << this->cne << endl ;
       
       
}


