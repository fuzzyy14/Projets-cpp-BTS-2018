#include "pch.h"
#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int abs, int ord)
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
