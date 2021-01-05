#include "fonctions.h"

int enleverCailloux = 0; 
void initialiser(int *nbCa, int *jo) //fonction pour initialiser la partie
{
	while (1) { // boucle infinie tant qu'il n'y a pas de break
		cout << "combien y-a-t'il de cailloux au depart ?" << endl; // demander le nombre de cailloux au départ
		cin >> *nbCa; // l'utilisateur rentre une valeur qui est stockée dans la case mémoire pointée par nbCa
		if (*nbCa <= 0) { // si l'utilisateur à rentré une valeur inférieure à 0
			cout << "Erreur, veuillez entrer un nombre positif" << endl; 
		}
		else { break; }// si tout va bien on sort de la boucle while(1)
	}
	while (1) {
		cout << "Quel joueur commence en premier ?" << endl;
		cin >> *jo;
		if (*jo != 1 && *jo != 2) { // si l'utilisateur rentre autre chose que 1 ou 2
			cout << "Erreur, veuillez entrer 1 ou 2 selon la personne qui commence" << endl;
		}
		else { break; }
	}

}

void utilisateurJoue(int *nbCa) {
	cout << "A vous de jouer !" << endl;
	cout << "Combien voulez vous enlever de cailloux ? (1, 2 ou 3)" << endl;


	while (1) {

		cin >> enleverCailloux;
		cin.ignore();
		if (enleverCailloux != 1 && enleverCailloux != 2 && enleverCailloux != 3) {
			cout << "erreur, veuillez enlever 1 a 3 cailloux" << endl;
			cin >> enleverCailloux;
			cin.ignore();
		}
		else {
			*nbCa = *nbCa - enleverCailloux; // soustraction du nombre de cailloux enlevés par l'utilisateur
			break;
		}
	}

	cout << "Il reste maintenant "<< *nbCa << " cailloux" << endl; // affichage du nombre de cailloux restant
	
}


void machineJoue(int *nbCa) {
	cout << "C'est maintenant a l'ordinateur de jouer" << endl;
	enleverCailloux = (rand() % 2)+1; // fonction random qui permet de choisir un nombre aléatoire entre 1 et 3
	*nbCa = *nbCa - enleverCailloux; // soustraction du nombre de cailloux enlevés par l'ordinateur

	cout << "Il reste maintenant " << *nbCa << " cailloux" << endl; // affichage du nombre de cailloux restant

}