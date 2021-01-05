#include "fonctions.h"
#include <string>
#include <iostream>
using namespace std;
int tailleTableau;
int decalage;
int main()
{
	cout << "Quelle taille pour le tableau ?" << endl;
	cout << "Entrez une taille pour le tableau : ";
	cin >> tailleTableau;
	char *caracteres = new char[tailleTableau]; // crée un tableau dans une case mémoire avec un pointeur nommé caracteres

	demanderChar(caracteres,tailleTableau); // demande a l'utilisateur de rentrer un caractère pour chaque case du tableau
	afficherTab(caracteres, tailleTableau); // affiche les valeurs du tableau
	cout << "De combien voulez vous decaler le tableau ?" << endl;
	cin >> decalage; // valeur entrée par l'utilisateur correspondant au nombre de décalages dans le tableau
	decalerTableau(caracteres,tailleTableau,decalage); // decaler de "decalage" (nombre) le tableau
	cout << "Voici votre tableau decale : " << endl;
	afficherTab(caracteres, tailleTableau); // affiche le tableau décalé
	system("pause");
	return 0;
	delete[] caracteres; // suppression de la case mémoire
}