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
	char *caracteres = new char[tailleTableau]; // cr�e un tableau dans une case m�moire avec un pointeur nomm� caracteres

	demanderChar(caracteres,tailleTableau); // demande a l'utilisateur de rentrer un caract�re pour chaque case du tableau
	afficherTab(caracteres, tailleTableau); // affiche les valeurs du tableau
	cout << "De combien voulez vous decaler le tableau ?" << endl;
	cin >> decalage; // valeur entr�e par l'utilisateur correspondant au nombre de d�calages dans le tableau
	decalerTableau(caracteres,tailleTableau,decalage); // decaler de "decalage" (nombre) le tableau
	cout << "Voici votre tableau decale : " << endl;
	afficherTab(caracteres, tailleTableau); // affiche le tableau d�cal�
	system("pause");
	return 0;
	delete[] caracteres; // suppression de la case m�moire
}