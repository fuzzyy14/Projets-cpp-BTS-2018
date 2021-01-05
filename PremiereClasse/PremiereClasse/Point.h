#pragma once
class Point
{
private:

	int x;
	int y;


public:
	void affiche();
	void deplace(int dx,int dy);
	Point(int abs,int ord);
	~Point();
	
};

