#include "rectangle.h"

rectangle::rectangle(int longueur, int largeur, point coinSupGauche) {
	this->setLongueur(longueur);
	this->setLargeur(largeur);
	this->setCoinSupGauche(coinSupGauche);
}

/*Getter*/
int rectangle::getLongueur() {
	return this->longueur;
}
int rectangle::getLargeur() {
	return this->largeur;
}
point rectangle::getCoinSupGauche() {
	return this->coinSupGauche;
}
/*Setter*/

void rectangle::setLongueur(int longueur) {
	this->longueur = longueur;
}

void rectangle::setLargeur(int largeur) {
	this->largeur = largeur;
}

void rectangle::setCoinSupGauche(point coinSupGauche) {
	this->coinSupGauche = coinSupGauche;
}

int rectangle::perimetre(int largeur, int longueur) {
	return (2 * largeur) + (2 * longueur);
}

int rectangle::surface(int largeur, int longueur) {
	return largeur * longueur;
}