#ifndef TP2_CPP_CERCLE_H
#define TP2_CPP_CERCLE_H
#include"point.h"
class cercle
{
	private:
		point centre;
		int diametre;

	public:

		cercle(int diametre, const point& centre);
		
		/*Getters*/
		point getCentre();
		int getDiametre();

		/*Setters*/
		void setCentre(point centre);
		void setDiametre(int diametre);

		float perimetre();
		float surface();
		bool surCercle(point point);
		bool dansCercle(point point);
};
#endif
