
// exercice 1 du contr�le
#include "fonctions.h"
#include <string>
#include <iostream>
using namespace std;
float a, b, c;
double leDiscriminant;
int main()
{
	cout << "Equation du second degres ( de type ax�+bx+c ), nombres de solutions reelles :" << endl;
	cout << "Valeur de a " << endl;
	a = demanderFloat(); // a est egal a un nombre flottant demand� dans la fonction demanderFloat
	cout << "Valeur de b " << endl;
	b = demanderFloat(); // b est egal a un nombre flottant demand� dans la fonction demanderFloat
	cout << "Valeur de c " << endl;
	c = demanderFloat(); // c est egal a un nombre flottant demand� dans la fonction demanderFloat
	leDiscriminant = calculDiscriminant(a, b, c); // leDiscriminant est calcul� dans la fonction calculDiscriminant
	afficheResultat(leDiscriminant,a,b,c); // on envoie la variable leDiscriminant � la fonction afficheResultat ainsi que les valeurs a,b et c

	system("pause"); // pause 
	return 0; // on retourne 0 pour vider les cases m�moire
}


