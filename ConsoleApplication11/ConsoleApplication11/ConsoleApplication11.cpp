// ConsoleApplication11.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
using namespace std;

void echange(double& a, double& b);
int main()
{
	double nombre1(28.1), nombre2(4.12);

	cout << "nombre1 vaut " << nombre1 << " et nombre2 vaut " << nombre2 << endl;
	echange(nombre1, nombre2);

	cout << "nombre1 vaut " << nombre1 << " et nombre2 vaut " << nombre2 << endl;
	system("pause");
	return 0;
}

void echange(double& a, double& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	
}