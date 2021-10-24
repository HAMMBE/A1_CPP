#pragma once
class GrilleMorpion
{

public :
	GrilleMorpion();
	bool caseVide(int idCase);
	bool victoireJoueur(int idJoueur);
	
	void afficheGrille();
	void ajoutJeton(int idCase);
private:
	int grille[2][2];
	bool ligneComplete(int ligne, int idJoueur);
	bool colonneComplete(int colonne, int idJoueur);
	bool diagonaleComplete(int diagonale, int idJoueur);

};

