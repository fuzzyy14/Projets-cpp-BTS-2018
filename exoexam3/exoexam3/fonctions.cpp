#include "fonctions.h"

char premierChar; // variable permettant de faire un décalage dans le tableau
void demanderChar(char *Tableau,int taille) {

	for (int i = 0; i < taille; i++)// pour i < la taille du tableau, on ajoute 1 à i
	{
		cout << "Entrez la valeur du caractere " << i+1 << " : "; // affiche le nombre de la case i
		cin >> Tableau[i]; // demande le caractere à ecrire dans la case i

	}


}
void decalerTableau(char *Tableau,int taille, int decaler)
{
	for (int y = 0; y < decaler; y++) { // répétition du décalage le nombre de fois que l'utilisateur la demandé (decaler)
		premierChar = Tableau[0]; // on assigne le 1er caractère du tableau à la variable premierChar
		for (int i = 0; i < taille; i++) 
		{
			Tableau[i - 1] = Tableau[i]; // on ecrit la valeur de la case i dans la case i-1 (par exemple la case 4 aura la valeur de la case 5 et ainsi de suite)


		}
		Tableau[taille - 1] = premierChar; // la dernière case du tableau prend la valeur de la 1ère case, on a donc fini de décaler le tableau de 1 caractère
	}
}

void afficherTab(char *Tableau, int taille)
{
	for (int i = 0; i < taille; i++) // tant que i est plus petit que taille, i gagne 1
	{
		cout << "valeur du caractere " << i+1 << " : " << Tableau[i] << endl; // affichage du caractère contenu dans la case i


	}


}