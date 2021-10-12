#include "triangle.h"
#include <math.h>

triangle::triangle(const point& pointA, const point& pointB, const point& pointC) : a(pointA), b(pointB), c(pointC){
}
/*Getter*/
point triangle::getPointA(){
	return a;
}

point triangle::getPointB() {
	return b;
}

point triangle::getPointC() {
	return c;
}

double triangle::getAB() {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}


double triangle::getAC() {
	return sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
}

double triangle::getBC() {
	return sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
}

/*Setter*/

void triangle::setPointA(const point& a) {
	this->a = a;
}

void triangle::setPointB(const point& b) {
	this->b = b;
}

void triangle::setPointC(const point& c) {
	this->c = c;
}

double triangle::Base() {
	double base;
	if (getAB() > getBC()) {
		base = getAB();
	}
	else {
		base = getBC();
	}
	if (base < getAC()) {
		base = getAC();
	}
	return base;
}

double triangle::Surface() {
	return ((b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y)) / 2.0;
}

bool triangle::estEquilateral() {
	bool equilateral = false;
	if (getAB() == getAC() && getAC() == getBC()) {
		equilateral = true;
	}
	return equilateral;
}
double triangle::Hauteur() {
	return 2 * Surface() / Base();
}

bool triangle::estIsoceles() {
	if (estEquilateral()) {
		return false;
	}
	
	return getAB() == getAC() || getAB() == getBC() || getAC() == getBC();

}
double triangle::Longueurs(){
	return 1.0;
}
bool triangle::estRectangle() {
	
	if (getAB() == Base())
	{
		return pow(Base(), 2) == pow(getBC(), 2) + pow(getAC(), 2);
	}
	if (getAC() == Base()) {
		return pow(Base(), 2) == pow(getBC(), 2) + pow(getAB(), 2);
	}
	if (getBC() == Base()) {
		return pow(Base(), 2) == pow(getAB(), 2) + pow(getAC(), 2);
	}
}