#include "pch.h"
#include "Personnage.h"
#include <iostream>
using namespace std;


Personnage::Personnage() // constructeur
{
	vivant = true;
	cout << " creation d'un personnage" << endl;

}


Personnage::~Personnage() // déconstructeur
{
	cout << " suppression d'un personnage" << endl;
}

void Personnage::parler()
{
	if (vivant == true) {
		cout << " Je suis vivant !" << endl;
	}
	if (vivant == false) {

		cout << " Je suis mort" << endl;
	}
}
void Personnage::attaquer()
{
	cout << "A l'attaque !!!" << endl;
}


void Personnage::tuer()
{
	vivant = false;

}


void Personnage::ressusciter()
{
	vivant = true;

}