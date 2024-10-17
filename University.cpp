
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
    cout << "Université: " << this->name << endl;
    cout << "Liste des étudiants:" << endl;
    for (const shared_ptr<Student>& etudiant : this->students) {
        etudiant->afficher_student();
    }
}
