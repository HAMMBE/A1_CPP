#include "rectangle.h"

rectangle::rectangle() {}
rectangle::rectangle(int longueur, int largeur) {
	this->longueur = longueur;
	this->largeur = largeur;
}

/*Getter*/
int rectangle::getLongueur() {
	return longueur;
}
int rectangle::getLargeur() {
	return largeur;
}
point rectangle::getCoinSupGauche() {
	return coinSupGauche;
}
/*Setter*/

void rectangle::setLongueur(int longueur) {
	this->longueur = longueur;
}

void rectangle::setLargeur(int largeur) {
	this->largeur = largeur;
}

void rectangle::setCoinSupGauche(const point& coinSupGauche) {
	this->coinSupGauche = coinSupGauche;
}

int rectangle::perimetre(int largeur, int longueur) {
	return (2 * largeur) + (2 * longueur);
}

int rectangle::surface(int largeur, int longueur) {
	return largeur * longueur;
}