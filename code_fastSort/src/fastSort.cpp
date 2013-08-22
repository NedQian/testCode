#include "../include/fastSort.h"

fastSort::fastSort(int data[], int start, int end, int length)
{
    //ctor
    if (data == NULL || start < 0 || end <0 || length <= 0 || end >= length || start >= length)
    {
        cout << "Error Input!" ;
    }
    else
        cout << "processing" <<endl;

    srand(time(NULL));
    sortArray(data, start, end, length);
}

fastSort::~fastSort()
{
    //dtor
}
int fastSort::randNum(int min, int max)
{
    int sizeN = max - min + 1;
    int randN = rand()% sizeN + min;
    return randN;
}

int fastSort::divideArray(int data[], int start, int end, int length)
{
    int randN = randNum(start, end);
    swapItem( data[start], data[randN] );
    int leftEnd = start;
    for(int i = start+1; i <= end; i++ )
    {
        if ( data[i] < data[start])
        {
            leftEnd ++;
            if ( leftEnd != i)
                swapItem( data[leftEnd], data[i] );
        }
    }
    swapItem( data[start], data[leftEnd] );
    return leftEnd;
}

bool fastSort::swapItem(int& left, int& right)
{
    int temp = left;
    left = right;
    right = temp;
    return 1;
}

bool fastSort::sortArray(int data[], int start, int end, int length)
{
    if ( start == end )
        return 1;

    int middleNum = divideArray( data, start, end, length );
    if ( middleNum < end )
        sortArray( data, middleNum+1, end, length );
    if( middleNum > start )
        sortArray( data, start, middleNum-1, length);
    return 1;

}

