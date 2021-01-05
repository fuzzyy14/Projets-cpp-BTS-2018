#include "pch.h"
#include "Personne.h"



Personne::Personne(): nom("non defini"), age(0)
{
	
}
Personne::Personne(int nouvelAge, string nouveauNom) : nom(nouveauNom), age(nouvelAge)
{
	
	
	cout << "adresse memoire de l'objet : " << this << endl;
}

Personne::~Personne()
{
}

string Personne::info()
{
	stringstream recupinfos;
	recupinfos << "Nom : " << nom <<" Age : " << age << " adresse memoire de l'objet : " << this;
	return recupinfos.str();
}

