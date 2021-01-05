#include "fonctions.h"
float valeurFlottant;
double discriminant;
float demanderFloat() // on demande un nombre a virgule et on le retourne
{
	cout << " Ecrivez un nombre a virgule : "; // on affiche " Ecrivez un nombre a virgule : " à l'écran
	cin >> valeurFlottant; // on demande à l'utilisateur d'entrer une valeur
	return valeurFlottant; // on retourne la valeur entrée dans la ligne du dessus

}
double calculDiscriminant(float a, float b, float c,float& sol1,float& sol2)
{

	discriminant = pow(b, 2) - (4 * a*c); // Calcul du discriminant : b²-4ac

	if (discriminant > 0) { // si sa valeur est positive
		sol1 = (-b + sqrt(discriminant)) / (2 * a);
		sol2 = (-b - sqrt(discriminant)) / (2 * a);
	}

	else if (discriminant == 0) { // sinon si sa valeur est nulle
		sol1 = (-b) / (2 * a);
	}



	return discriminant; // on retourne la valeur du discriminant

}

void afficheResultat(float valeurDiscriminant,float sol1,float sol2,float a,float b,float c) // affichage du resultat
{
	cout << "L'equation est : " << a << "x*x +" << b << "x+" << c << endl; // on affiche l'équation
	cout << "le discriminant(Delta) a pour valeur " << valeurDiscriminant << endl; // affichage de la valeur du discriminant
	if (valeurDiscriminant < 0) { // si sa valeur est negative
		cout << "Le discriminant est negatif, donc : ";
		cout << "l'equation n'admet pas de solutions reelles, mais il y a deux solutions complexes." << endl;
	}
	else if (valeurDiscriminant > 0) { // sinon si sa valeur est positive
		cout << "Le discriminant est positif, donc : ";
		cout << "l'equation admet deux solutions reelles." << endl;
		cout << "Les deux solutions de cette equation sont : " << sol1 << " et " << sol2 << endl;
	}
	else if (valeurDiscriminant == 0) { // sinon si sa valeur est nulle
		cout << "Le discriminant est egal a zero, donc : ";
		cout << "l'equation admet une seule solution reelle." << endl;
		cout << "La solution de cette equation est : " << sol1 << endl;
	}

}