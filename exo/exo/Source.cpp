
//écrire une fonction qui a comme paramètres un tableau d'entiers de taille quelconque, la taille du tableau,et 2 pointeurs vers des entiers min et max. 
//La fonction doit renvoyer dans les entiers pointés par min et max respectivement les plus petits et les plus grands entiers du tableau.
#include <string>
#include <iostream>
#include "fonctions.h"
using namespace std;
string checkscore;
int i = 0;
int main()
{
	cout << "Combien y-a-t'il de joueurs ? " << endl;
	cin >> i;
	int *score = new int[i];
	for (int numerojoueur = 0; numerojoueur <= i - 1; numerojoueur++)
	{
		cout << "Quel est le score du Joueur " << numerojoueur + 1 << " ?" << endl;
		cin >> score[numerojoueur];
	}
	checkscore = maxi(score, i);
	cout << checkscore << endl;
	checkscore.clear();
	checkscore = mini(score, i);
	cout << checkscore << endl;

	system("pause");
	return 0;
	delete[] score;
}