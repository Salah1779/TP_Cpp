
#include <iostream>
#include "University.h"


using namespace std;

University::University() : name("") {}

University::University(string nom) : name(nom) {}

University::~University() {}

void University::ajouterEtudiant(shared_ptr<Student> etudiant) {
    
    this->students.push_back(etudiant);
}


void University::afficherEtudiants() const {
    cout << "Universit�: " << this->name << endl;
    cout << "Liste des �tudiants:" << endl;
    for (const shared_ptr<Student>& etudiant : this->students) {
        etudiant->afficher_student();
    }
}
