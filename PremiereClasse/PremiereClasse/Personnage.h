#pragma once
class Personnage
{


private:

	bool vivant;



public:
	
	void parler();
	void attaquer();
	void tuer();
	void ressusciter();
	Personnage();
	~Personnage();
};

