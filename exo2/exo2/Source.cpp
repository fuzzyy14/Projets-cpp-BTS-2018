#include <string>
#include <iostream>
#include "fonctions.h"
using namespace std;
int main()
{

	string *infos = new string[5];
	demandercoords(infos);
	affichercoords(infos);
	system("pause");
	return 0;
	delete[] infos;
}