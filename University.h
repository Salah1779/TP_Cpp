#pragma once
#include <string>
#include <memory>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;
class University
{
    private:
       string name;
       vector<shared_ptr<Student>> students; 

public:
    University();
    University(string );  
    ~University(); 

    void ajouterEtudiant(shared_ptr<Student> etudiant);  
    void afficherEtudiants() const; 
};


  




