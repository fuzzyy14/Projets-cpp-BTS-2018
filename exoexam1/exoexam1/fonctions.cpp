#include "fonctions.h"
float valeurFlottant;
double discriminant;
float demanderFloat() // on demande un nombre a virgule et on le retourne
{
	cout << " Ecrivez un nombre a virgule : "; // on affiche " Ecrivez un nombre a virgule : " à l'écran
	cin >> valeurFlottant; // on demande à l'utilisateur d'entrer une valeur
	return valeurFlottant; // on retourne la valeur entrée dans la ligne du dessus

}
double calculDiscriminant(float a, float b, float c)
{

	discriminant = pow(b, 2) - (4 * a*c); // Calcul du discriminant : b²-4ac 
	return discriminant; // on retourne la valeur du discriminant

}

void afficheResultat(float valeurDiscriminant, float a, float b, float c) // affichage du resultat
{
	cout << "L'equation est : " << a << "x*x +" << b << "x+" << c << endl; // on affiche l'équation
	cout << "le discriminant(Delta) a pour valeur " << valeurDiscriminant << endl; // affichage de la valeur du discriminant
	if (valeurDiscriminant < 0) { // si sa valeur est negative
		cout << "Le discriminant est negatif, donc : ";
		cout << "L'equation n'admet pas de solutions reelles, mais il y a deux solutions complexes." << endl;
	}
	else if (valeurDiscriminant > 0) { // si sa valeur est positive
		cout << "Le discriminant est positif, donc : ";
		cout << "L'equation admet deux solutions reelles." << endl;
	}
	else if (valeurDiscriminant == 0) { // si sa valeur est nulle
		cout << "Le discriminant est egal a zero, donc : ";
		cout << "L'equation admet une seule solution reelle." << endl;
	}

}