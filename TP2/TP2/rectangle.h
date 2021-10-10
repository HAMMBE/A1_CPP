#ifndef TP2_CPP_RECTANGLE_H
#define TP2_CPP_RECTANGLE_H

#include "point.h";

class rectangle
{
private :
	int longueur, largeur;
	point coinSupGauche;
public :
	rectangle(int longueur, int largeur, point coinSupGauche);
	/*Getter*/
	int getLongueur();
	int getLargeur();
	point getCoinSupGauche();
	
	/*Setter*/
	void setLongueur(int longueur);
	void setLargeur(int largeur);
	void setCoinSupGauche(point coinSupGauche);

	int perimetre(int largeur, int longueur);
	int surface(int largeur, int longueur);

};
#endif
