#include "Vehicule.hpp"


Vehicule::Vehicule(){


}


Vehicule::Vehicule(string Taille, int poids) : Poids(poids), Taille(0){
	this->Taille = new string(Taille);

}

Vehicule::Vehicule(Vehicule const& vehiculeacopier) : Poids(vehiculeacopier.Poids), Taille(){

	Taille = new string(*(vehiculeacopier.Taille));

}


void Vehicule::gettaille()const{

	cout << "adresse: " << Taille << " && valeur: " << *Taille << endl;
}
void Vehicule::getpoids()const{
	cout << "Poids: " << Poids << endl;

}

Vehicule::~Vehicule(){
	delete(Taille);

}