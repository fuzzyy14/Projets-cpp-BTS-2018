#include "fonctions.h"
float valeurFlottant;
double discriminant;
float demanderFloat()
{
	cout << " Ecrivez un nombre a virgule : " << endl;
	cin >> valeurFlottant;
	return valeurFlottant;

}
double calculDiscriminant(float a,float b,float c)
{

	discriminant = pow(b,2) - (4 * a*c);
	return discriminant;

}