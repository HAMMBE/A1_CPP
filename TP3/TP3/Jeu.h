#pragma once
#include "GrilleMorpion.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include "GrilleP4.h"
class Jeu
{
public:
	Jeu();
	void jeuMorpion();
	void jeuP4();
private :
	bool fin;
	GrilleMorpion morpion;
	GrilleP4 P4;
	void felicitation(int idJoueur);
};

