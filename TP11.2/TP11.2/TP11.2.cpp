// TP11.2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "mesfonctions.h"
using namespace std;
int hauteur;
int largeur;
char symbole;

int main()
{
	while (1) {
		afficherMenu(0);
		afficherMenu(1);
		hauteur = choixNombre();
		afficherMenu(2);
		largeur = choixNombre();
		afficherMenu(3);
		symbole = choixsymbole();
		dessiner(hauteur, largeur, symbole);
		if (faireNouveauDessin() == 1) {
			cout << "fin du programme\r\n";
			break;
		}
	}
}

