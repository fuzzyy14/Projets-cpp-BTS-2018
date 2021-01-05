#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;
Point::Point(double abs, double ord)
{
	x = abs;
	y = ord;
}


Point::~Point()
{
}

void Point::affiche()
{
	cout << "Le point est aux coordonnees : (" << x << "," << y << ")" << endl;
}
void Point::deplace(int dx, int dy)
{
	x += dx;
	y += dy;
}


double Point::distance(Point b)
{
	this->x;
	this->y;
	b.x;
	b.y;
	return sqrt(pow((this->x - b.x), 2) + pow((this->y - b.y), 2));

}
Point Point::milieu(Point b)
{
	double f, g;
	f = (this->x + b.x) / 2;
	g = (this->y + b.y) / 2;
	Point m(f, g);
	return m;

}
void Point::setAbs(double b)
{
	this->x = b;
}
void Point::setOrd(double b)
{
	this->y = b;
}
double Point::getAbs()const
{
	return this->x;
}
double Point::getOrd()const
{
	return this->y;
}

bool Point::estEgal(Point b)const
{

	if (this->x == b.x && this->y == b.y) {
		return true;
	}

	else {
		return false;
	}

}

bool operator==(Point const& a, Point const& b)
{
	return a.estEgal(b);
}



Cercle::Cercle(double a, double b, double c)
{

	abs = a;
	ord = b;
	rayon = c;
}


Cercle::~Cercle()
{
}




void Cercle::setAbs(double b)
{
	this->abs = b;
}
void Cercle::setOrd(double b)
{
	this->ord = b;
}
void Cercle::setRayon(double b)
{
	this->rayon = b;
}
double Cercle::getRayon()const
{
	return this->rayon;
}
double Cercle::getAbs()const
{
	return this->abs;
}
double Cercle::getOrd()const
{
	return this->ord;
}

double Cercle::surface()
{
	return 3.14*pow(this->rayon, 2);
}

bool Cercle::estInterieur(Point const& a)const
{
	if (sqrt(pow((this->ord - a.getOrd()), 2) + pow((this->abs - a.getAbs()), 2)) < this->rayon)
	{


		return true;
	}
	else
	{

		return false;
	}
}

bool operator<=(Cercle const& a, Point const& b)
{
	return a.estInterieur(b);
}