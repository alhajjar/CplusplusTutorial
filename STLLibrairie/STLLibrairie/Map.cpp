#include "Include.hpp"


/* map like set but we have a key and value> */
int main()
{
	//set has no duplicates 

	map<char, int> myset;
	myset.insert(pair<char,int>('a',3) ); 
	myset.insert(make_pair('z', 200)); 

	map<char, int>::iterator it=myset.begin();
	myset.insert(it, pair<char, int>('b', 300));
	it = myset.find('z'); // O(log(n)), it points to 7
	
	for (it = myset.begin(); it != myset.end(); it++)
		cout << (*it).first << " => " << (*it).second << endl;
	system("PAUSE");
	return 0;
}