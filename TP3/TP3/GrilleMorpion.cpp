#include "GrilleMorpion.h"
#include <iostream>
using namespace std;

GrilleMorpion::GrilleMorpion() {
	int grille[2][2] = { 0 };
}

bool GrilleMorpion::caseVide(int idCase){
	switch (idCase)
	{
	case 1 :
		return grille[0][0] == 0;
	case 2:
		return grille[0][1] == 0;
	case 3:
		return grille[0][2] == 0;
	case 4:
		return grille[1][0] == 0;
	case 5:
		return grille[1][1] == 0;
	case 6:
		return grille[1][2] == 0;
	case 7:
		return grille[2][0] == 0;
	case 8:
		return grille[2][1] == 0;
	case 9:
		return grille[2][2] == 0;
	default:
		break;
	}
}

void GrilleMorpion::afficheGrille(){
	cout << " ____ ____ ____" << endl;
	cout << "|    |    |    |" << endl;
	cout << "| " << grille[0][0] << "  | " << grille[0][1] << "  | " << grille[0][2] << "  |" << endl;
	cout << "|____|____|____|" << endl;
	cout << "| " << grille[1][0] << "  | " << grille[1][1] << "  | " << grille[1][2] << "  |" << endl;
	cout << "|____|____|____|" << endl;
	cout << "| " << grille[2][0] << "  | " << grille[2][1] << "  | " << grille[2][2] << "  |" << endl;
	cout << "|    |    |    |" << endl;
	cout << " ____ ____ ____" << endl;

}