#pragma once
#include <string>
#include <iostream>
using namespace std;


void demanderChar(char *Tableau,int taille); // Demande à l'utilisateur de rentrer un caractère pour chaque case du tableau
void decalerTableau(char *Tableau, int taille, int decaler); // Décale le tableau autant de fois que l'utilisateur la demandé, la variable étant decaler pour le nombre de décalage à faire
void afficherTab(char *Tableau, int taille); // Affichage de tout les caractères du tableau à l'écran ainsi que le numéro de leur case
