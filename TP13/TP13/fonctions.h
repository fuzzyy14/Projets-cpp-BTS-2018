#pragma once
#include "pch.h"
#include <iostream>

void afficheResultat(double tempsCoureurs[], int nombreCoureurs, double& moyenneTemps);
double calculMoyenne(double tempsCoureurs[], int nombreCoureurs);
void demanderTempsCoureurs(double tempsCoureurs[], int nombreCoureurs);
int combienCoureurs();
void initialisationTableau(double tempsCoureurs[], int nombreCoureursMax);