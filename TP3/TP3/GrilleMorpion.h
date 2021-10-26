#pragma once
#include <array>

class GrilleMorpion
{

public :
	GrilleMorpion();
	bool caseVide(int ligne, int colonne);
	bool victoireJoueur(int idJoueur);
	bool estPleine();
	
	void afficheGrille();
	void ajoutJeton(int ligne, int colonne, int idJoueur);

private:
	std::array<std::array<int, 3>,3> grille;
	bool ligneComplete(int ligne, int idJoueur);
	bool colonneComplete(int colonne, int idJoueur);
	bool diagonaleComplete(int diagonale, int idJoueur);

};

