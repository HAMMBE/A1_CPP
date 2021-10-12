// TP2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<math.h>
#include"point.h"
#include"rectangle.h"
#include"cercle.h"
#include"triangle.h"

int main()
{
    point pointRectangle = point(0, 0);
    rectangle rectangle1 = rectangle();


    point pointCircle = point(0, 0);
    cercle circle = cercle(4, pointCircle);
    

    std::cout << "Sur cercle " << circle.surCercle(point(0, 2)) << std::endl;

    std::cout << "Dans cercle " << circle.dansCercle(point(0, 1)) << std::endl;
    std::cout << "Pas Dans cercle " << circle.dansCercle(point(0, 3)) << std::endl;

    point trianglePoint1 = point(0, 0);
    point trianglePoint2 = point(1, 0);
    point trianglePoint3 = point(0, 1);
    triangle triangle1 = triangle(trianglePoint1, trianglePoint2, trianglePoint3);
    std::cout << "Hauteur : " << triangle1.Hauteur() << std::endl;
    std::cout << "Est rectangle : " << triangle1.estRectangle() << std::endl;
    std::cout << "Aire : " << triangle1.Surface() << std::endl;
    std::cout << "Est Isoceles : " << triangle1.estIsoceles() << std::endl;
    

}
