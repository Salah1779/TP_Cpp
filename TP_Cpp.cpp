// TP_Cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complexe.h"
#include "Cercle.h"
using namespace std;

int main()
{
    /********************************************COMPLEXE**************************************************/

    /*Complexe* z1 = new Complexe(6,6);
    z1->afficher();
    Complexe* z2 = new Complexe(2,1);
    z2->afficher();

    Complexe z3;
    z3 = *z1 / *z2;
 
    z3.afficher();
   




    delete z1;
    delete z2;*/

    /********************************************CERCLE-POINT**************************************************/

    Point* p1 = new Point(2.0, 3.8);
    p1->afficher();
 

    Cercle* c1 = new Cercle(1.0, p1);
    c1->afficher();
   
    c1->updateR(12);
    c1->translater(-2 , -3.8);
    c1->afficher();

    delete p1;
    delete c1;


    

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
