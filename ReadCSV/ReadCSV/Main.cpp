#include "Include.hpp"

int main()
{
	stringstream Mystring;

	ifstream  myfile;
	myfile.open("example.csv");

	vector<vector <double>> Mat;
	/* Transformation des valeurs de splitArray de string en double*/
	vector< double > splitArrayd;
	string ligne;
	int nbligne = 0;
	string str;
	double num;


	/* Si l'ouverture du fichier a échouée */
	if (myfile.fail())
	{
		cout << "file n'existe pas" << endl;
	}
	/* Sinon extraction du contenu du fichier dans une matrice */
	else
	{
		while (getline(myfile, ligne))
		{
			Mystring << ligne;

			while (getline(Mystring, str, ';'))
			{
				num = lexical_cast<double>(str);
				splitArrayd.push_back(num);
			}

			Mat.push_back(splitArrayd);
			splitArrayd.clear();

			Mystring.clear();

		}

		myfile.close();

		MatrixIterator row;
		constdoubleiterator col;

		for (row = Mat.begin(); row != Mat.end(); ++row)
		{

			for (col = row->begin(); col != row->end(); ++col)
			{


				cout << *col << " ";
			}
			cout << endl;
		}


	}
	cout << "\npress any key to continue" << endl;
	cin.ignore(80, '\n');
	return 0;


}