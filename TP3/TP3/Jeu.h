#pragma once
#include "GrilleMorpion.h"
#include <stdlib.h>
#include <string>
#include <iostream>
class Jeu
{
public:
	Jeu();
	void initMorpion();
private :
	bool fin;
	GrilleMorpion morpion;
};

