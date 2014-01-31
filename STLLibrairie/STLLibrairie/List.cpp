#include "Include.hpp"

/*
* list
*/
/*
int main()
{


	list<int> lis = { 4, 5, 6 }; // deq.size() == 3
	lis.push_back(4); // deq[3]
	lis.push_back(5); // deq[4]
	lis.push_front(7); // deq[0]    ; vec.size() ==6;

	for (MyListiterator itr = lis.begin(); itr != lis.end(); itr++)
		cout << *itr << " ";
	cout << endl;

	MyListiterator itr = find(lis.begin(), lis.end(), 4);
	lis.insert(itr, 8);

	for (MyListiterator itr = lis.begin(); itr != lis.end(); itr++)
		cout << *itr << " ";
	cout << endl;

	itr++;

	lis.erase(itr);

	for (MyListiterator itr = lis.begin(); itr != lis.end(); itr++)
		cout << *itr << " ";
	cout << endl;

	if (lis.empty())
	{
		cout << "list is empty !" << endl;

	}
	cout << lis.size() << endl;
	list<int> lis2(lis); //copy constructor
	lis.clear(); //remove all items in lis
	lis2.swap(lis); //lis2 becomes empty and lis has his items back
	lis.splice(itr, lis2, itr_a,itr_b);
	system("PAUSE");
	return 0;
}
*/
