
#include "fonctions.h"
#include "pch.h"
#include <iostream>
using namespace std;
int x;

int combienCoureurs() {
	cout << "Combien de coureurs ?" << endl;
	cin >> x;
	cout << " **************************************************** " << endl;
	return x;

}
void initialisationTableau(double tempsCoureurs[], int nombreCoureursMax) {
	int i = 0;
	for (i = 0; i < nombreCoureursMax; i++) {
		
		tempsCoureurs[i] = { 0 } ;
	}
	cout << " initialisation du tableau terminee " << endl;
	cout << " **************************************************** " << endl;
}

double calculMoyenne(double tempsCoureurs[], int nombreCoureurs) {
	double moyenne(0);
	int i = 0;
	for (i = 0; i < nombreCoureurs; i++) {
		moyenne = moyenne + tempsCoureurs[i];

	}
	moyenne = moyenne / nombreCoureurs;
	return moyenne;
}

void demanderTempsCoureurs(double tempsCoureurs[], int nombreCoureurs) {
	int i = 0;
	for (i = 0; i < nombreCoureurs; i++) {
		cout << "Temps (en s) du coureur numero " << i+1 << " : ";
		cin >> tempsCoureurs[i];
	}
	cout << " **************************************************** " << endl;

}




void afficheResultat(double tempsCoureurs[], int nombreCoureurs, double& moyenneTemps) {
	int i = 0;
	for (i = 0; i < nombreCoureurs; i++) {
		cout << "Temps (en s) du coureur numero " << i+1 << " : " << tempsCoureurs[i] << endl;
	}
	cout << " **************************************************** " << endl;
	cout << "La moyenne des temps des coureurs est de : " << moyenneTemps << " secondes" << endl;


}

