#include "GrilleP4.h"
#include <iostream>

int dernierJetonColonne;
int dernierJetonLigne;

GrilleP4::GrilleP4() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            this->grille[i][j] = 0;
        }
    }
    dernierJetonColonne = 0;
    dernierJetonLigne = 0;
}

bool GrilleP4::ligneComplete(int ligne, int idJoueur)
{
    int somme = 0;

    for (int j = 0; j < 7; j++)
    {
        if (grille[ligne][j] == idJoueur)
        {
            somme += 1;
            if(somme == 4)
            {
                return true;
            }
        }
        else
        {
            somme = 0;
        }
    }

    if (somme == 4)
    {
        return true;
    }


    return false;
}

bool GrilleP4::colonneComplete(int colonne, int idJoueur) {
    for (int i = 0; i < 4; i++) {
        if (grille[i][colonne] != idJoueur) {
            return false;
        }
    }
}

void GrilleP4::afficheGrille() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            std::cout << grille[i][j] << "\t";
        }
        std::cout << "\n";
    }

}

bool GrilleP4::estPleine() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (caseVide(i, j)) {
                return false;
            }
        }
    }
    std::cout << "La grille est pleine égalité !";
    return true;
}

bool GrilleP4::caseVide(int ligne, int colonne) {
    return grille[ligne][colonne] == 0;
}

void GrilleP4::ajoutJeton(int colonne, int idJoueur) {
    while (colonne > 7 || colonne < 0 || colonnePleine(colonne)) {
        std::cout << "Inserrez un chiffre entre 0 et 2 d'une colonne non pleine! \n";
        std::cout << "Insérrez la colonne (entre 0 et 7) : ";
        std::cin >> colonne;
    }
    bool jetonPose = false;
    int i = 3;
    while(!jetonPose){
        if (grille[i][colonne] == 0) {
            grille[i][colonne] = idJoueur;
            dernierJetonColonne = colonne;
            dernierJetonLigne = i;
            jetonPose = true;
        }
        i--;
    }

}

bool GrilleP4::colonnePleine(int colonne) {
    for (int i = 0; i < 4; i++) {
        if (grille[i][colonne] == 0) {
            return false;
        }
    }
    return true;
}

bool GrilleP4::diagonaleComplete(int ligne, int colonne, int id)
{
    int i = 0;
    int j = 0;
    int somme = 0;
    bool compte = true;
    //if ((getLigne() + 3 < 4) and (getLigne() - 3 >= 0) and (getColonne() + 3 < 7) and (getColonne() - 3 >= 0))
    if ((ligne + 3 < 4) and (colonne + 3 < 7))
    {
        i = ligne;
        j = colonne;
        while (compte)
        {
            if (grille[i][j] == id)
            {
                somme += 1;
                i += 1;
                j += 1;
                if (somme == 4)
                {
                    return true;
                }
            }
            else
            {
                compte = false;
            }

        }
    }
    else if ((ligne - 3 >= 0) and (colonne + 3 < 7))
    {
        i = ligne;
        j = colonne;
        compte = true;
        while (compte)
        {
            if (grille[i][j] == id)
            {
                somme += 1;
                i -= 1;
                j += 1;
                if (somme == 4)
                {
                    return true;
                }
            }
            else
            {
                compte = false;
            }

        }
    }
    else if ((ligne + 3 < 4) and (colonne - 3 >= 0))
    {
        i = ligne;
        j = colonne;
        compte = true;
        while (compte)
        {
            if (grille[i][j] == id)
            {
                somme += 1;
                i += 1;
                j -= 1;
                if (somme == 4)
                {
                    return true;
                }
            }
            else
            {
                compte = false;
            }

        }
    }
    else if ((ligne - 3 >= 0) and (colonne - 3 >= 0))
    {
        i = ligne;
        j = colonne;
        compte = true;
        while (compte)
        {
            if (grille[i][j] == id)
            {
                somme += 1;
                i -= 1;
                j -= 1;
                if (somme == 4)
                {
                    return true;
                }
            }
            else
            {
                compte = false;
            }

        }
    }
    else
    {
        return false;
    }
}

bool GrilleP4::victoireJoueur(int idJoueur) {
    for (int i = 0; i < 7; i++) {
        if (colonneComplete(i, idJoueur)) {
            return true;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (ligneComplete(i, idJoueur)) {
            return true;
        }
    }
    if (diagonaleComplete(dernierJetonLigne, dernierJetonColonne, idJoueur)) {
        return true;
    }
    return false;
}
