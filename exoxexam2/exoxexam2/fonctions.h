#pragma once
#include <string>
#include <iostream>
using namespace std;

float demanderFloat(); // demander � l'utilisateur une valeur flottante, qui sera retourn�e en sortie

double calculDiscriminant(float a, float b, float c, float& sol1, float& sol2);// Calcul du discriminant ainsi que des solutions r�elles de l'�quation

void afficheResultat(float valeurDiscriminant,float sol1, float sol2,float a, float b, float c); // affichage du r�sultat de l'�quation � l'�cran ainsi que la valeur du discriminant et l'�quation