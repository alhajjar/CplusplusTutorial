#include "Include.hpp"

//typedef vector<int>::iterator Myiterator; //declaration d'un type iterator

	/*
	 * Vector
	 */
/*
int main()
{
	

	vector<int> vec; // vec.size() == 0
	vec.push_back(4); // vec[0]
	vec.push_back(5); // vec[1]
	vec.push_back(7); // vec[2]     vec: {4, 1, 8}; vec.size() ==3;

	// vector specific operations :
	cout << vec[2] << endl; // 7 no range check
	cout << vec.at(2) << endl; // 7 throw range_error exception if out of range

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " " ;
	cout << endl;

	for (MyVeciterator itr = vec.begin(); itr != vec.end(); itr++)
		cout << *itr << " ";
	cout << endl;

	// for (MyVeciterator itr: vec) //c++ 11
		// cout << itr << " "; 

	//vector is a dynamically allocated contiguous array in memory
	int* p = &vec[0]; // then i can say p[2] = 6;

	if (vec.empty())
	{
		cout << "vector is empty !" << endl;

	}
	
	cout << vec.size() << endl;
	
	vector<int> vec2(vec); //copy constructor

	vec.clear(); //remove all items in vec
	
	vec2.swap(vec); //vec2 becomes empty and vec has 3 items

	system("PAUSE");
	return 0;
}*/

