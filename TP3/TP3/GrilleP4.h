#pragma once
#include <array>
class GrilleP4
{
public:
	GrilleP4();
	bool caseVide(int ligne, int colonne);
	bool victoireJoueur(int idJoueur);
	bool estPleine();

	void afficheGrille();
	void ajoutJeton(int colonne, int idJoueur);

private:
	std::array<std::array<int, 7>, 4> grille;
	bool ligneComplete(int ligne, int idJoueur);
	bool colonneComplete(int colonne, int idJoueur);
	bool diagonaleComplete(int ligne, int colonne, int idJoueur);
	bool colonnePleine(int colonne);
	int dernierJetonLigne;
	int dernierJetonColonne;

};

