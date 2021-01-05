#include "fonctions.h"
using namespace std;
int meilleurscore = 0;
int moinsbonscore = 0;
int lejoueur;
string sortie;

string maxi(int *tabl,int i) {
	sortie.clear();
	for (int numerojoueur = 1; numerojoueur <= i; numerojoueur++)
	{
		if (meilleurscore < tabl[numerojoueur]) {
			meilleurscore = tabl[numerojoueur];
			lejoueur = numerojoueur;
			
		 }
	}
	sortie += "le meilleur bon joueur est le joueur ";
	sortie += lejoueur;
	sortie += " avec un score de ";
	sortie += meilleurscore;
	return sortie;
}



string mini(int *tabl, int i) {
	sortie.clear();
	for (int numerojoueur = 1; numerojoueur <= i; numerojoueur++)
	{
		if (moinsbonscore < tabl[numerojoueur]) {
			moinsbonscore = tabl[numerojoueur];

		}
	}
	sortie += "le moins bon joueur est le joueur ";
	sortie += lejoueur;
	sortie += " avec un score de ";
	sortie += moinsbonscore;
	return sortie;
}