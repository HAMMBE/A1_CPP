#ifndef TP2_CPP_TRIANGLE_H
#define TP2_CPP_TRIANGLE_H

#include "point.h"

class triangle {
private:
    point a, b, c;

public:
    triangle(const point& pointA, const point& pointB, const point& pointC);

    /*Getter*/
    point getPointA();
    point getPointB();
    point getPointC();
    double getAB();
    double getAC();
    double getBC();
    
    /*Setter*/
    void setPointA(const point& a);
    void setPointB(const point& b);
    void setPointC(const point& c);

    double Base();
    double Hauteur();
    double Surface();
    double Longueurs();

    bool estIsoceles();
    bool estRectangle();
    bool estEquilateral();
};

#endif

