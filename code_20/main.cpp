#include <iostream>
#include "dataStruct.h"
#define WIDTH 3
#define HEIGHT 4

using namespace std;

void printMatrix( int ** number, int startX, int startY, int width, int height ){
    int i=0, j=0;
    if( number != NULL && width >0 && height >0 && startX >= 0 && startY >= 0 ){
        for( i = startX; i <= startX + width -1; i++ )
            cout << number[i][startY] << " ";
        for( j = startY + 1; j <= startY + height - 1 && height > 1 ; j++ )
            cout << number[startX + width - 1][j] << " ";
        for( i = startX + width - 2; i >= startX && width > 1 && height > 1; i-- )
            cout << number[i][startY + height - 1] << " ";
        for( j = startY + height - 2 ; j >= startY + 1 && width > 1 && height > 2; j-- )
            cout << number[startX][j] << " ";
    }
    else
        return;
    if( width > 2 && height > 2 ){
        printMatrix( number, startX + 1, startY + 1, width - 2, height - 2 );
    }
}
int main()
{
    int value = 0;

    int ** number = new int*[WIDTH];
    for( int i=0; i<WIDTH; i++ ){
        number[i] = new int[HEIGHT];
    }
    for( int j=0; j < HEIGHT; j++ ){
        for( int i=0; i < WIDTH; i++ ){
            value++;
            number[i][j] = value;
        }
    }
    printMatrix( number, 0, 0, WIDTH, HEIGHT );

    for( int i=0; i<WIDTH; i++ ){
        delete[] number[WIDTH];
    }
    delete[] number;

    return 0;
}
