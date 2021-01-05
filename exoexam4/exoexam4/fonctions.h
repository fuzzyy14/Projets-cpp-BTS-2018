#pragma once
#include <string>
#include <iostream>

using namespace std;


void initialiser(int *nbCa, int *jo); // initialisation du jeu, nbCa correspon au nombre de cailloux au d�but et jo au joueur qui commence en 1er, dans cette fonction l'utilisateur sera demand� de choisir le nombre de cailloux au d�but de la partie ainsi que la personne qui commence � jouer

void utilisateurJoue(int *nbCa); // tour de l'utilisateur, il lui sera demand� de choisir combien de cailloux il veut enlever, il sera oblig� de choisir un nombre entre 1 et 3

void machineJoue(int *nbCa); // tour de la machine, elle choisi au hasard un nombre entre 1 et 3
