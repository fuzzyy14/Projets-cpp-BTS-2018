
#include "mesfonctions.h"
#include <iostream>
using namespace std;
int y = 0;
char z;
char x;
int choixNombre()

{
		cin >> y;
		cout << y << "\n\r";
		return (y);
}

char choixsymbole()
{
	cin >> z;
	cout << z << "\n\r";
	return (z);

}

void dessiner(int x,int y,char z)
{
	for (int i = 0; i < x; i++) {
		
		cout << "\r\n";
		for (int g = 0; g < y; g++) {


			cout << z;
		}

	}
	cout << "\r\n";

}

int faireNouveauDessin()
{
	while (1) {
		cout << "voulez-vous faire un nouveau rectangle ? (Y/y) Oui ou (N/n) Non ? \r\n";
		cin >> x;
		cin.ignore();
		if (x == 'Y' || x == 'y') {
			y = 0;
			break;

		}
		else if (x == 'N' || x == 'n')
		{
			y = 1;
			break;
		}
	}
	return(y);
}



void afficherMenu(int menu)
{
	switch (menu) {
	case (0):
		cout << "---Programme de conception d'un rectangle personnalise\r\n";
		break;
	case (1):
		cout << "Hauteur du rectangle a construire : (>0) : ";
		break;
		
	case(2):
		cout << "Largeur du rectangle a construire : (>0) : ";
		break;

		
	case(3):
		cout << "Motif de remplissage du rectangle : (>0) : ";
		break;
		
	}
}