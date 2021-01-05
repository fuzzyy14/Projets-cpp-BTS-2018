#include "pch.h"
#include <iostream>
using namespace std;

bool calculCarreCube(int& const nombre, int& nombreCarre, int& nombreCube);
int main()
{
	int nombre(0), carre(0), cube(0);
	cout << "Choisir un nombre entre 0 et 100 : " << flush;
	cin >> nombre;


	if (!calculCarreCube(nombre, carre, cube)) // si le programme ne peut pas faire le calcul / la fonction retourne false
	{

		cout << "Erreur...!" << endl;
	}
	else 
	{
		cout << "Nombre= " << nombre << endl;
		cout << "Nombre au carre = " << carre << endl;
		cout << "Nombre au cube = " << cube << endl;
	}
	return 0;
}


bool calculCarreCube(int& const nombre, int& nombreCarre, int& nombreCube) 
{
	nombreCarre = nombre * nombre; // calcul du carré
	nombreCube = nombreCarre * nombre; // calcul du cube
	return nombre, nombreCarre, nombreCube; // on retourne le nombre, son carré puis son cube

}
