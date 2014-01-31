#include <iostream>

using namespace std;

int main()
{

int **dynamicArray = 0;
int ROWS = 10,COLUMNS = 10;
// memory allocated for elements of rows.
dynamicArray = new int *[ROWS];

// memory allocated for  elements of each column.
for( int i = 0 ; i < ROWS ; i++ ) {
    dynamicArray[i] = new int[COLUMNS];
}
for( int i = 0 ; i < ROWS ; i++ ) {
        for( int j = 0 ; j < COLUMNS ; j++ ) {
    dynamicArray[i][j] = i;
           cout<< dynamicArray[i][j]<<endl;
        }

}

// free the allocated memory
for( int i = 0 ; i < ROWS ; i++ ) {
    delete [] dynamicArray[i];
}
delete [] dynamicArray;
    return 0;
}
