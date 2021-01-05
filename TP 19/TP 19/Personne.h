#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Personne
{
private:
	
	int age;
	string nom;
	

public:
	Personne();
	Personne(int nouvelAge, string nouveauNom);
	~Personne();
	string info();
};

