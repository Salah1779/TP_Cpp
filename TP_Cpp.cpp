// TP_Cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complexe.h"
#include "Cercle.h"
#include "University.h"

using namespace std;

int main()
{
    cout << " /********************************************COMPLEXE**************************************************/" << endl;

    Complexe* z1 = new Complexe(6,6);
    z1->afficher();
    Complexe* z2 = new Complexe(2,1);
    z2->afficher();

    cout << "\n Operation de Devision:"<< endl;
    Complexe z3;
    z3 = *z1 / *z2;
    z3.afficher();

    z3 = *z1 / 2;
    z3.afficher();

    Complexe z4; 
    z4 = *z2 / 0;


    cout << "\n Operation de Multiplication :" << endl;
   
    z4 = (*z2 == *z1) ? *z2 * *z1 : z4 = *z2 * 4 ;
    z4.afficher();

    delete z1;
    delete z2;

    cout << " \n /********************************************CERCLE-POINT**************************************************/" << endl;

    Point* p1 = new Point(2.0, 3.8);
    p1->afficher();
 

    Cercle* c1 = new Cercle(1.0, p1);
    c1->afficher();
   

    c1->updateR(12);
    c1->translater(-2 , -3.8);
    c1->afficher();

    Cercle c2(*c1);

    (c2 == *c1) ? cout << "les cercles sont egaux  " << endl : cout << "Inegalite " << endl;

    delete p1;
    delete c1;


    cout << " \n /********************************************UNIVERSITY-STUDENT**************************************************/" << endl;

    University university("Hassan 2 de Casablanca");

    shared_ptr<Student> etudiant1 = make_shared<Student>("Anas Naciri", " R10001640");
    shared_ptr<Student> etudiant2 = make_shared<Student>("Adil Taarabt", "K1292333");

    university.ajouterEtudiant(etudiant1);
    university.ajouterEtudiant(etudiant2);

    university.afficherEtudiants();

    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
