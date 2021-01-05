#pragma once
class Point
{
private:

	double x;
	double y;


public:
	void affiche();
	void deplace(int dx, int dy);
	Point(double abs, double ord);
	~Point();
	double distance(Point b);
	Point milieu(Point b);
	void setAbs(double b);
	void setOrd(double b);
	double getAbs()const;
	double getOrd()const;
	bool estEgal(Point b)const;

};
bool operator==(Point const& a, Point const& b);



class Cercle
{
private:

	double rayon;
	double abs;
	double ord;
public:
	Cercle(double a, double b, double c);
	~Cercle();
	void setAbs(double b);
	void setOrd(double b);
	double getAbs()const;
	double getOrd()const;
	double surface();
	bool estInterieur(Point const& a)const;
	void setRayon(double b);
	double getRayon()const;

};

bool operator<=(Cercle const& a, Point const& b);