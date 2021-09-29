#pragma once
#include "point.h";
class rectangle
{
private :
	int longueur, largeur;
	point coinSupGauche;
public :
	/*Getter*/
	int getLongueur();
	int getLargeur();
	point getCoinSupGauche();
	/*Setter*/
	void setLongueur(int longueur);
	void setLargeur(int largeur);
	void setCoinSupGauche(point coinSupGauche);


};

