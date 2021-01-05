#pragma once
#include <string>
#include <iostream>
using namespace std;

float demanderFloat(); // demander à l'utilisateur une valeur flottante, qui sera retournée en sortie

double calculDiscriminant(float a, float b, float c);// Calcul du discriminant

void afficheResultat(float valeurDiscriminant,float a,float b,float c);// affichage du discriminant et de l'équation