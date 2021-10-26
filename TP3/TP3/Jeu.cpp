#include "Jeu.h"


Jeu::Jeu() {
	fin = false;
}


void Jeu::jeuMorpion(){
	int ligneJ;
	int colonneJ;
	morpion = GrilleMorpion();
	morpion.afficheGrille();
	while (!fin) {
		std::cout << "Au tour du Joueur 1 : \n";
		std::cout << "Ins�rrez la ligne (entre 0 et 2) : ";
		std::cin >> ligneJ;
		std::cout << "Ins�rrez la colonne (entre 0 et 2) : ";
		std::cin >> colonneJ;
		morpion.ajoutJeton(ligneJ, colonneJ, 1);
		morpion.afficheGrille();
		
		if (morpion.victoireJoueur(1)) {
			fin = true;

		}else {
			std::cout << "Au tour du Joueur 2 : \n";
			std::cout << "Ins�rrez la ligne (entre 0 et 2) : ";
			std::cin >> ligneJ;
			std::cout << "Ins�rrez la colonne (entre 0 et 2) : ";
			std::cin >> colonneJ;
			morpion.ajoutJeton(ligneJ, colonneJ, 2);
			morpion.afficheGrille();
		}

	}


}


