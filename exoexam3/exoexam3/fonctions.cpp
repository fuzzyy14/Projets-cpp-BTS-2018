#include "fonctions.h"

char premierChar; // variable permettant de faire un d�calage dans le tableau
void demanderChar(char *Tableau,int taille) {

	for (int i = 0; i < taille; i++)// pour i < la taille du tableau, on ajoute 1 � i
	{
		cout << "Entrez la valeur du caractere " << i+1 << " : "; // affiche le nombre de la case i
		cin >> Tableau[i]; // demande le caractere � ecrire dans la case i

	}


}
void decalerTableau(char *Tableau,int taille, int decaler)
{
	for (int y = 0; y < decaler; y++) { // r�p�tition du d�calage le nombre de fois que l'utilisateur la demand� (decaler)
		premierChar = Tableau[0]; // on assigne le 1er caract�re du tableau � la variable premierChar
		for (int i = 0; i < taille; i++) 
		{
			Tableau[i - 1] = Tableau[i]; // on ecrit la valeur de la case i dans la case i-1 (par exemple la case 4 aura la valeur de la case 5 et ainsi de suite)


		}
		Tableau[taille - 1] = premierChar; // la derni�re case du tableau prend la valeur de la 1�re case, on a donc fini de d�caler le tableau de 1 caract�re
	}
}

void afficherTab(char *Tableau, int taille)
{
	for (int i = 0; i < taille; i++) // tant que i est plus petit que taille, i gagne 1
	{
		cout << "valeur du caractere " << i+1 << " : " << Tableau[i] << endl; // affichage du caract�re contenu dans la case i


	}


}