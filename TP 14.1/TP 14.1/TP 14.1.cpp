#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string *p = new string[5];
	cout << "Quel est votre nom ? ";
	getline (cin,p[0]);
	cout << endl;
	cout << "Quel est votre prenom ? ";
	getline(cin, p[1]);
	cout << endl;
	cout << "Quel age avez-vous ? ";
	getline(cin, p[2]);
	cout << "Donnez votre adresse : ";
	getline(cin, p[3]);
	cout << endl;
	cout << "Donnez votre numero de telephone : ";
	getline(cin, p[4]);
	cout << endl;


	cout << "Votre nom de famille : " << p[0] << endl;
	cout << "Votre prenom : " << p[1] << endl;
	cout << "Vous avez : " << p[2] << " ans" << endl;
	cout << "Vous vivez au : " << p[3] << endl;
	cout << "Votre numero de telephone : " << p[4] << endl;
	return 0;

	delete[] p;
}