#include <iostream>
#include"GrilleMorpion.h"
#include "Jeu.h"
#include "GrilleP4.h"

int main()
{
	Jeu jeu1 = Jeu();
	int jeulancer = 0;
	while (jeulancer < 1 || jeulancer > 2) {
		std::cout << "Choississez le jeu à lancé Morpion (1) ou Puissance 4 (2) ? \n";
		std::cin >> jeulancer;
	}

	if (jeulancer == 1) {
		jeu1.jeuMorpion();
	}
	else {
		jeu1.jeuP4();
	}
}