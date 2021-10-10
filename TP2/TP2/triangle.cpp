#include "triangle.h"
#include <math.h>

/*Getter*/
point triangle::getPointA(){
	return this->a;
}

point triangle::getPointB() {
	return this->b;
}

point triangle::getPointC() {
	return this->c;
}

float triangle::getAB() {
	return sqrt(pow(this->a.x - this->b.x, 2) + pow(this->a.y - this->b.y, 2));
}

float triangle::getAC() {
	return sqrt(pow(this->a.x - this->c.x, 2) + pow(this->a.y - this->c.y, 2));
}

float triangle::getBC() {
	return sqrt(pow(this->b.x - this->c.x, 2) + pow(this->b.y - this->c.y, 2));
}

/*Setter*/

void triangle::setPointA(point a) {
	this->a = a;
}

void triangle::setPointB(point b) {
	this->b = b;
}

void triangle::setPointC(point c) {
	this->c = c;
}


