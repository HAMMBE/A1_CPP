#ifndef TP2_CPP_TRIANGLE_H
#define TP2_CPP_TRIANGLE_H

#include "point.h"

class triangle {
private:
    point a, b, c;

public:
    /*Getter*/
    point getPointA();
    point getPointB();
    point getPointC();
    float getAB();
    float getAC();
    float getBC();
    
    /*Setter*/
    void setPointA(point a);
    void setPointB(point b);
    void setPointC(point c);

    float Base();
    float Hauteur();
    float Surface();
    float Longueurs();

    bool isIsosceles();
    bool isRight();
    bool isEquilateral();
    void triangle();
};

#endif

