#include<iostream>
using namespace std;
template <typename T>
T **AllocateDynamicArray( int nRows, int nCols)
{
      T **dynamicArray;

      dynamicArray = new T*[nRows];
      for( int i = 0 ; i < nRows ; i++ )
      dynamicArray[i] = new T [nCols];

      return dynamicArray;
}

template <typename T>
void FreeDynamicArray(T** dArray)
{
      delete [] *dArray;
      delete [] dArray;
}

int main()
{
      int **my2dArr = AllocateDynamicArray<int>(4,4);
      my2dArr[0][0]=5;
      my2dArr[0][1] = 0;
      my2dArr[2][2]=8;
      my2dArr[1][1] = 1;
      cout << my2dArr[0][0] << my2dArr[0][1] << endl;
      cout << my2dArr[1][1] <<  my2dArr[2][2]<< endl;

      FreeDynamicArray<int>(my2dArr);
      return 0;
}
