#include <string>
#include "fonctions.h"
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;


int main()
{
	srand(time(NULL)); // initialisation de rand
	int *nbCa = new int; // cr�ation case m�moire d'un int avec un pointeur du nom de nbCa
	int *jo = new int;// cr�ation case m�moire d'un int avec un pointeur du nom de jo


	cout << "Joueur 1 = Vous , Joueur 2 = Machine" << endl; //Affichage de quel nombre correspond � qui
	initialiser(nbCa,jo); // initialisation du jeu
	cout << " nombre de cailloux : " << *nbCa << " premier joueurs : " << *jo << endl; // affichage du nombre de cailloux au d�but du jeu et du joueur qui commence


	while (*nbCa > 0) { // tant qu'il reste des cailloux, la partie continue
		if (*jo == 1) // si la m�moire point�e par *jo est � 1, alors c � l'utilisateur de jouer
		{
			utilisateurJoue(nbCa);
			*jo = 2;
		}
		else // sinon c'est � l'ordinateur de jouer
		{
			machineJoue(nbCa);
			*jo = 1;
		}

	}
	if (*jo == 1) // � la fin de la partie quand il n'y a plus de cailloux, si la m�moire point�e par *jo est � 1, alors l'utilisateur � gagn�
	{
		cout << "Vous avez gagne !" << endl;
	}
	else // sinon il a perdu
	{
		cout << "Vous avez perdu !" << endl;
	}



	system("pause");
	return 0;
	delete[] nbCa; // on supprime la case m�moire 
	delete[] jo;   // on supprime la case m�moire 
}