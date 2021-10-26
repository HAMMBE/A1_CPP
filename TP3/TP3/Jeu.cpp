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
		std::cout << "Insérrez la ligne (entre 0 et 2) : ";
		std::cin >> ligneJ;
		std::cout << "Insérrez la colonne (entre 0 et 2) : ";
		std::cin >> colonneJ;
		morpion.ajoutJeton(ligneJ, colonneJ, 1);
		morpion.afficheGrille();
		if (morpion.estPleine()) {
			fin = true;
		}
		if (morpion.victoireJoueur(1)) {
			fin = true;
			felicitation(1);

		}else if(!fin) {
			std::cout << "Au tour du Joueur 2 : \n";
			std::cout << "Insérrez la ligne (entre 0 et 2) : ";
			std::cin >> ligneJ;
			std::cout << "Insérrez la colonne (entre 0 et 2) : ";
			std::cin >> colonneJ;
			morpion.ajoutJeton(ligneJ, colonneJ, 2);
			morpion.afficheGrille();
			if (morpion.victoireJoueur(2)) {
				fin = true;
				felicitation(2);
			}
			if (morpion.estPleine()) {
				fin = true;
			}
		}

	}
}

void Jeu::felicitation(int idJoueur) {
	std::cout << "Le joueur " << idJoueur << " gagne la partie !";
}

void Jeu::jeuP4(){
	int colonneJ;
	P4 = GrilleP4();
	P4.afficheGrille();
	while (!fin) {
		std::cout << "Au tour du Joueur 1 : \n";
		std::cout << "Insérrez la colonne (entre 0 et 6) : ";
		std::cin >> colonneJ;
		P4.ajoutJeton(colonneJ, 1);
		P4.afficheGrille();
		if (P4.estPleine()) {
			fin = true;
		}
		if (P4.victoireJoueur(1)) {
			fin = true;
			felicitation(1);

		}
		else if (!fin) {
			std::cout << "Au tour du Joueur 2 : \n";
			std::cout << "Insérrez la colonne (entre 0 et 6) : ";
			std::cin >> colonneJ;
			P4.ajoutJeton(colonneJ, 2);
			P4.afficheGrille();
			if (P4.victoireJoueur(2)) {
				fin = true;
				felicitation(2);
			}
			if (P4.estPleine()) {
				fin = true;
			}
		}
	}
}

