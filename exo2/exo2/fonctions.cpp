#include "fonctions.h"


void demandercoords(string *tabl) {


	cout << "Quel est votre nom ? ";
	getline(cin, tabl[0]);
	cout << endl;


	cout << "Quel est votre prenom ? ";
	getline(cin, tabl[1]);
	cout << endl;


	cout << "Quel age avez-vous ? ";
	getline(cin, tabl[2]);
	cout << endl;


	cout << "Donnez votre adresse : ";
	getline(cin, tabl[3]);
	cout << endl;


	cout << "Donnez votre numero de telephone : ";
	getline(cin, tabl[4]);
	cout << endl;


}

void affichercoords(string *tabl) {

	cout << "Votre nom de famille : " << tabl[0] << endl;
	cout << "Votre prenom : " << tabl[1] << endl;
	cout << "Vous avez : " << tabl[2] << " ans" << endl;
	cout << "Vous vivez au : " << tabl[3] << endl;
	cout << "Votre numero de telephone : " << tabl[4] << endl;



}

