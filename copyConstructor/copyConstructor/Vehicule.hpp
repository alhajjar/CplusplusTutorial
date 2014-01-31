#include <iostream>
#include <string>

using namespace std;

class Vehicule
	{
	   public:
		
			Vehicule();
			//  objet(objet  const& objetàcopier); //Le prototype du constructeur de copie	
			Vehicule(Vehicule const& VehiculeACopier); 		    
			Vehicule(string , int  );
			void gettaille()const;
			void getpoids()const;
			~Vehicule();
				  
		private:
			int Poids;
			string *Taille;
					  
    };