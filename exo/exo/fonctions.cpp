#include "fonctions.h"
using namespace std;
int meilleurscore = 0;
int moinsbonscore = 100000;
int lejoueur;
string sortie;

string maxi(int *tabl, int i) {
	sortie.clear();
	for (int numerojoueur = 0; numerojoueur <= i - 1; numerojoueur++)
	{
		if (meilleurscore < tabl[numerojoueur]) {
			meilleurscore = tabl[numerojoueur];
			lejoueur = numerojoueur+1;

		}

	}
	sortie += "le meilleur bon joueur est le joueur ";
	sortie += to_string(lejoueur);
	sortie += " avec un score de ";
	sortie += to_string(meilleurscore);
	return sortie;
}



string mini(int *tabl, int i) {
	sortie.clear();
	for (int numerojoueur = 0; numerojoueur <= i - 1; numerojoueur++)
	{
		if (moinsbonscore > tabl[numerojoueur]) {
			moinsbonscore = tabl[numerojoueur];
			lejoueur = numerojoueur+1;
		}
	}
	sortie += "le moins bon joueur est le joueur ";
	sortie += to_string(lejoueur);
	sortie += " avec un score de ";
	sortie += to_string(moinsbonscore);
	return sortie;
}