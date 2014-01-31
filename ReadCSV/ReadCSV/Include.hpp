#ifndef INCLUDE_HPP
#define INCLUDE_HPP

/*
* STL Headers
*/
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <memory>

/* *C++11 */
#include <unordered_set>
#include <unordered_map>

#include <iterator>
#include <algorithm>
#include <numeric>
#include <functional>
//
#include <iostream>
#include <istream>
#include <sstream>
#include <fstream>
#include <bitset>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <Windows.h>
#include <Winbase.h>
#include <memory>
#include <boost/lexical_cast.hpp>

#include <string>
#include <thread>
#include <mutex>

using namespace std;
using namespace boost;

typedef vector<int>::iterator MyVeciterator;
typedef deque<int>::iterator Mydeqiterator;
typedef list<int>::iterator MyListiterator;
typedef vector<double>::const_iterator constdoubleiterator;
typedef vector< vector<double> >::const_iterator MatrixIterator;

#endif