#include "Vehicule.hpp"

int main(){



	Vehicule vehicule1("petite vehicule", 20);
	Vehicule vehicule2(vehicule1);
	//vehicule2 = vehicule1;
	vehicule1.gettaille();
	vehicule2.gettaille();
	vehicule1.getpoids();
	vehicule2.getpoids();


	system("PAUSE");
	return 0;
}