// exercice 1 du contrôle
#include "fonctions.h"
#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
float a, b, c;
double valeurDiscriminant;
int main()
{
	cout << "Equation du second degres ( de type ax²+bx+c ), nombres de solutions reelles :" << endl;
	cout << "Valeur de a " << endl;
	a = demanderFloat();
	cout << "Valeur de b " << endl;
	b = demanderFloat();
	cout << "Valeur de c " << endl;
	c = demanderFloat();
	valeurDiscriminant = calculDiscriminant(a, b, c);


	cout << "le discriminant(Delta) a pour valeur " << valeurDiscriminant << endl;
	if (valeurDiscriminant < 0) {
		cout << "Le discriminant est negatif, donc : ";
		cout << "L'equation n'admet pas de solutions reelles, mais il y a deux solutions complexes." << endl;
	}
	else if (valeurDiscriminant > 0) {
		cout << "Le discriminant est positif, donc : ";
		cout << "L'equation admet deux solutions reelles." << endl;
	}
	else if (valeurDiscriminant = 0) {
		cout << "Le discriminant est egal a zero, donc : ";
		cout << "L'equation admet une seule solution reelle." << endl;
	}


}


