// TP2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<math.h>
#include"point.h"
#include"rectangle.h"

int main()
{
    point pointRectangle = point(0, 0);
    rectangle rectangle = rectangle();


    Point pointCircle = Point(0, 0);
    Circle circle = Circle(pointCircle, 4);
    circle.Display();

    std::cout << "Sur cercle " << circle.isOnCircle(Point(0, 2)) << std::endl;

    std::cout << "Dans cercle " << circle.isInCircle(Point(0, 1)) << std::endl;
    std::cout << "Pas Dans cercle " << circle.isInCircle(Point(0, 3)) << std::endl;

    Point trianglePoint1 = Point(0, 0);
    Point trianglePoint2 = Point(1, 0);
    Point trianglePoint3 = Point(0, 1);
    Triangle triangle = Triangle(trianglePoint1, trianglePoint2, trianglePoint3);
    triangle.Display();

}
