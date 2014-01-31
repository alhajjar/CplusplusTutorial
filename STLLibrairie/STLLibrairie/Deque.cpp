#include "Include.hpp"

   /*
	* deque
	*/
/*
int main()
{
	

	deque<int> deq = {4, 5, 6}; // deq.size() == 3
	deq.push_back(4); // deq[3]
	deq.push_back(5); // deq[4]
	deq.push_front(7); // deq[0]    ; vec.size() ==6;

	// deq has similar interface with vector :
	cout << deq[2] << endl; // 7 no range check
	cout << deq.at(2) << endl; // 7 throw range_error exception if out of range

	for (int i = 0; i < deq.size(); i++)
		cout << deq[i] << " ";
	cout << endl;

	for (Mydeqiterator itr = deq.begin(); itr != deq.end(); itr++)
		cout << *itr << " ";
	cout << endl;

	// for (Mydeqiterator itr: deq) //c++ 11
	// cout << itr << " "; 

	//deque is a dynamically allocated contiguous array in memory
	int* p = &deq[0]; // then i can say p[2] = 6;

	if (deq.empty())
	{
		cout << "vector is empty !" << endl;

	}
	cout << deq.size() << endl;
	deque<int> deq2(deq); //copy constructor
	deq.clear(); //remove all items in deq
	deq2.swap(deq); //vec2 becomes empty and deq has his items back
	
	system("PAUSE");
	return 0;
}
*/
