#pragma once

#include"point.h"
class cercle
{
	private:
		point centre;
		int diametre;

	public:

		cercle(int diametre, const point& centre);

		point getCentre();
		int getDiametre();

		void setCentre(point centre);
		void setDiametre(int diametre);

		float perimetre();
		float surface();
		bool surCercle(point point);
		bool dansCercle(point point);
};
