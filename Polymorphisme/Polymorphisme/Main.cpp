#include "Include.hpp"

class Vehicule {
protected:
	int Taille;

	public:
		virtual void getTaille() = 0;
		virtual ~Vehicule(){
			cout << " destructeur Vehicule" << endl;
			/*int a;
			cin >> a;*/
		}

};

class Voiture:public Vehicule {


public:
	void getTaille()
	{
		cout << "Taille Voiture" << endl;
	}
	~Voiture(){
		 cout << " destructeur Voiture" << endl;
		/* int a;
		 cin >> a;*/
	}

};

class Camion :public Vehicule {


public:
	void getTaille()
	{
		cout << "Taille camion" << endl;
	}
	~Camion(){
		cout << " destructeur Camion" << endl;
		/*int a;
		cin >> a;*/
	}

};
int main(){
	
	Camion c;
	Voiture v;

	Vehicule *vehicule1 = &c;
	Vehicule *vehicule2 = &v;

	vehicule1->getTaille();
	vehicule2->getTaille();



	system("PAUSE");

	return 0;
}