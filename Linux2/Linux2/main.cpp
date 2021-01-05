#include "Point.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int x;
Point un(0, 0);
Point deux(0, 0);
Point m(0, 0);
Cercle lecercle(0, 0, 0);
int main()
{
	cout << "Calcul de la distance et du milieu entre deux points" << endl;
	cout << "Saisir l'abscisse du 1er point : ";
	cin >> x;
	un.setAbs(x);
	cout << endl;
	cout << "Saisir l'ordonnee du 1er point : ";
	cin >> x;
	un.setOrd(x);
	cout << endl;
	cout << "Saisir l'abscisse du 2eme point : ";
	cin >> x;
	deux.setAbs(x);
	cout << endl;
	cout << "Saisir l'ordonnee du 2eme point : ";
	cin >> x;
	deux.setOrd(x);
	cout << endl;
	un.affiche();
	deux.affiche();
	cout << "La distance entre A et B est : ";
	cout << un.distance(deux) << endl;

	m = un.milieu(deux);
	cout << "Le point milieu entre A et B est : ";
	m.affiche();

	if (un == deux) {
		cout << "Les deux points sont aux memes coordonnees " << endl;
	}
	else
	{

		cout << "Les deux points ne sont pas aux memes coordonnees " << endl;
	}

	//------------------------------Cercle------------------------------


	cout << "-----------------------------------------------------" << endl;
	cout << "Surface d'un cercle et point dans le cercle" << endl;
	cout << "Saisir l'abscisse du centre du cercle ";
	cin >> x;
	lecercle.setAbs(x);
	cout << endl;
	cout << "Saisir l'ordonnee du centre du cercle : ";
	cin >> x;
	lecercle.setOrd(x);
	cout << endl;
	cout << "Saisir le rayon du cercle : ";
	cin >> x;
	lecercle.setRayon(x);
	cout << endl;
	cout << "Le cercle est aux coordonées (" << lecercle.getAbs() << "," << lecercle.getOrd() << ") et a un rayon de " << lecercle.getRayon() << endl;
	cout << "Le cercle a une surface de " << lecercle.surface() << endl;
	if (lecercle <= un == true)
	{
		cout << "Le point est dans le cercle" << endl;
	}
	else
	{
		cout << "Le point est en dehors du cercle" << endl;
	}



	system("pause");
	return 0;
}

