
#include <iostream>
#include<string>
#include<fstream>

//I.1.1
int Somme(int a, int b) {
    return a + b;
}

//I.1.2

void inverse(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

// I.1.3

void Somme2(int a, int b, int c) {
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;
    
    *pc = a + b;
}

int Somme2ref(int a, int b, int c) {
    int& pa = a;
    int& pb = b;
    int& pc = c;

    pc = pa + pb;
    return c;
}

//I.1.4
void tab() {
    int tableau[10];
    std::cout << "Tableau avant tri :" << std::endl;
    for (int i = 0; i < 10; i++) {
        tableau[i] = rand()%100;
        std::cout << tableau[i] << std::endl;
    }
    std::cout << "Tableau après tri :" << std::endl;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (tableau[j] < tableau[i]) {
                inverse(tableau[j], tableau[i]);
            }
        }

    }
    for (int i = 0; i < 10; i++) {
        std::cout << tableau[i] << std::endl;
    }
    
}

//II.
int score(int nbEchange) {
    if (nbEchange > 3) {
        nbEchange = 3;
    }
    switch (nbEchange) {
    case 0:
        return 0;
        break;
    case 1:
        return 15;
        break;
    case 2:
        return 30;
        break;
    case 3:
        return 40;
        break;

    }
}

void tennis(int NbEchangeWinJoueur1, int NbEchangeWinJoueur2){
    std::string ScoreJ1 = std::to_string(score(NbEchangeWinJoueur1));
    std::string ScoreJ2 = std::to_string(score(NbEchangeWinJoueur2));
    if (NbEchangeWinJoueur1 - NbEchangeWinJoueur2 >= 2 && NbEchangeWinJoueur1 >= 3) {
        std::cout << "Le joueur 1 gagne le jeu." << std::endl;
        std::cout << "Score joueur 1 : " + ScoreJ1 + " Score Joueur 2 : " + ScoreJ2 << std::endl;
    }
    else if (NbEchangeWinJoueur2 - NbEchangeWinJoueur1 >= 2 && NbEchangeWinJoueur2 >= 3) {
        std::cout << "Le joueur 2 gagne le jeu." << std::endl;
        std::cout << "Score joueur 1 : " + ScoreJ1 + " Score Joueur 2 : " + ScoreJ2 << std::endl;
    }
    else if (NbEchangeWinJoueur1 - NbEchangeWinJoueur2 == 1 && NbEchangeWinJoueur1 >= 2 && NbEchangeWinJoueur2 >= 2) {
        std::cout << "Le joueur 1 à l'avantage" << std::endl;
        std::cout << "Score joueur 1 : " + ScoreJ1 + " Score Joueur 2 : " + ScoreJ2 << std::endl;
    }
    else if (NbEchangeWinJoueur2 - NbEchangeWinJoueur1 == 1 && NbEchangeWinJoueur1 >= 2 && NbEchangeWinJoueur2 >= 2) {
        std::cout << "Le joueur 2 à l'avantage" << std::endl;
        std::cout << "Score joueur 1 : " + ScoreJ1 + " Score Joueur 2 : " + ScoreJ2 << std::endl;
    }
    else {
        std::cout << "Score joueur 1 : " + ScoreJ1 + " Score Joueur 2 : " + ScoreJ2 << std::endl;
    }
}


//III.1.2
void bonjour(){
    std::string nom;
    std::cout << "Saissez votre nom ET votre prénom : ";
    std::getline(std::cin, nom);
    std::cout << "Bonjour " + nom << std::endl;
}

//III.2.2

void trouve() {
    int nbToFind = rand()%1000;
    int nbUser = -1;
    int essai = 0;
    while(nbUser != nbToFind) {
        if (nbUser < nbToFind && essai != 0) {
            std::cout << "C'est plus !" << std::endl;
        }
        else if (essai != 0) {
            std::cout << "C'est moins !" << std::endl;
        }
        std::cout << "Devinez un nombre entre 0 et 1000 : " << std::endl;
        std::cin >> nbUser;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Erreur : Saisissez un nombre !" << std::endl;
            essai--;
        }
       essai++;
    }
    std::cout << "Bravo vous avez réussi à trouver en " + std::to_string(essai) + " essais" << std::endl;
}

int main()
{

    trouve();

}


