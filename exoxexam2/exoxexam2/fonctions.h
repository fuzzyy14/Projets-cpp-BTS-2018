#pragma once
#include <string>
#include <iostream>
using namespace std;

float demanderFloat(); // demander à l'utilisateur une valeur flottante, qui sera retournée en sortie

double calculDiscriminant(float a, float b, float c, float& sol1, float& sol2);// Calcul du discriminant ainsi que des solutions réelles de l'équation

void afficheResultat(float valeurDiscriminant,float sol1, float sol2,float a, float b, float c); // affichage du résultat de l'équation à l'écran ainsi que la valeur du discriminant et l'équation