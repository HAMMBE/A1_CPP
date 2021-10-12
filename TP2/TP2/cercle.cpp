#include "cercle.h"
#define _USE_MATH_DEFINES
#include "math.h"

point cercle::getCentre() {
	return this->centre;
}

int cercle::getDiametre() {
	return this->diametre;
}

void cercle::setCentre(point centre) {
	this->centre = centre;
}

void cercle::setDiametre(int diametre) {
	this->diametre = diametre;
}

float cercle::perimetre() {
	return diametre* M_PI;
}

float cercle::surface() {
	return pow(M_PI * diametre / 2, 2);
}

bool cercle::surCercle(point point) {

}

bool cercle::dansCercle(point point) {
	return pow(point.x - centre.x, 2) + pow(point.y - centre.y, 2) < pow(diametre / 2 , 2);
}

