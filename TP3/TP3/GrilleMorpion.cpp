#include "GrilleMorpion.h"
#include <iostream>
using namespace std;

GrilleMorpion::GrilleMorpion() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			this->grille[i][j] = 0;
		}
	}
}

bool GrilleMorpion::caseVide(int ligne, int colonne){
	return grille[ligne][colonne] == 0;
}

bool GrilleMorpion::estPleine() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (caseVide(i, j)) {
				return false;
			}
		}
	}
	return true;
}

void GrilleMorpion::afficheGrille(){
	cout << " ____ ____ ____" << endl;
	cout << "|    |    |    |" << endl;
	cout << "| " << this->grille[0][0] << "  | " << this->grille[0][1] << "  | " << this->grille[0][2] << "  |" << endl;
	cout << "|____|____|____|" << endl;
	cout << "| " << this->grille[1][0] << "  | " << this->grille[1][1] << "  | " << this->grille[1][2] << "  |" << endl;
	cout << "|____|____|____|" << endl;
	cout << "| " << grille[2][0] << "  | " << this->grille[2][1] << "  | " << this->grille[2][2] << "  |" << endl;
	cout << "|    |    |    |" << endl;
	cout << " ____ ____ ____" << endl;

}

bool GrilleMorpion::ligneComplete(int ligne, int idJoueur) {
	for (int i = 0; i < 3; i++) {
		if (grille[ligne][i] != idJoueur) {
			return false;
		}
	}
}

bool GrilleMorpion::colonneComplete(int colonne, int idJoueur) {
	for (int i = 0; i < 3; i++) {
		if (grille[i][colonne] != idJoueur) {
			return false;
		}
	}
}

bool GrilleMorpion::diagonaleComplete(int diagonale, int idJoueur) {
	if (diagonale == 1) {
		for (int i = 0; i < 3; i++) {
			if (grille[i][i] != idJoueur) {
				return false;
			}
		}
		return true;
	}
	else if (diagonale == 2) {
		int j = 2;
		for (int i = 0; i < 3; i++) {
			if (grille[i][j] != idJoueur) {
				return false;
			}
		}
		return true;
	}
}

bool GrilleMorpion::victoireJoueur(int idJoueur) {
	for (int i = 0; i < 3; i++) {
		if (ligneComplete(i, idJoueur) || colonneComplete(i, idJoueur)) {
			return true;
		}
	}
	if (diagonaleComplete(1, idJoueur) || diagonaleComplete(2, idJoueur)) {
		return true;
	}
	return false;
}

void GrilleMorpion::ajoutJeton(int ligne, int colonne, int idJoueur) {
	
	while (colonne > 2 || colonne < 0 || ligne > 2 || ligne < 0 || !caseVide(ligne, colonne)) {
		std::cout << "Inserrez un chiffre entre 0 et 2 d'une case vide! \n";
		std::cout << "Insérrez la ligne (entre 0 et 2) : ";
		std::cin >> ligne;
		std::cout << "Insérrez la colonne (entre 0 et 2) : ";
		std::cin >> colonne;
	}
	grille[ligne][colonne] = idJoueur;
}