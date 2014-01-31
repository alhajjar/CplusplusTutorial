#include "Include.hpp"


/*
int main()
{
	//set has no duplicates 

	set<int> myset;
	myset.insert(3); //myset: {3}
	myset.insert(1); //myset: {1, 3}
	myset.insert(7); //myset: {1, 3, 7} , O(log(n))

	set<int> ::iterator it;
	it = myset.find(7); // O(log(n)), it points to 7
					//sequence containers don't have find() member function
	pair<set<int>::iterator, bool> ret;
		// insert returns a pair mumber the bool indicats if insertion successful or not
	ret = myset.insert(3); // no new element inserted

	if (ret.second == false)
		it = ret.first;   // "it" now points to element 3

	myset.insert(it, 9); // myset: {1, 3, 7, 9} o(log(n)) ==> o(n)
						//it points to 3

	myset.erase(it); // myset: {1, 7, 9}

	myset.erase(7); // myset: {1, 9}

	system("PAUSE");
	return 0;
}*/