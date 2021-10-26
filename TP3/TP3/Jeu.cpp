#include "Jeu.h"

bool fin = false;

Jeu::Jeu() {
	initMorpion();
}

void Jeu::initMorpion() {
	morpion = GrilleMorpion();
	morpion.afficheGrille();
	std::cout << "dizn";
	int x = 0;
	int y = 0;
	std::cout << "Entrer la ligne : ";
	std::cin >> x;
	std::cout << "Entre la colonne : ";
	std::cin >> y;
	morpion.ajoutJeton(x, y, 1);
	morpion.afficheGrille();
}
