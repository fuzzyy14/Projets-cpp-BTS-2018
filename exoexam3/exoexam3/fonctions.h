#pragma once
#include <string>
#include <iostream>
using namespace std;


void demanderChar(char *Tableau,int taille); // Demande � l'utilisateur de rentrer un caract�re pour chaque case du tableau
void decalerTableau(char *Tableau, int taille, int decaler); // D�cale le tableau autant de fois que l'utilisateur la demand�, la variable �tant decaler pour le nombre de d�calage � faire
void afficherTab(char *Tableau, int taille); // Affichage de tout les caract�res du tableau � l'�cran ainsi que le num�ro de leur case
