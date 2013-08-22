#ifndef FASTSORT_H
#define FASTSORT_H

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class fastSort
{
    public:
        fastSort(int data[], int start, int end, int length);
        virtual ~fastSort();
    protected:
    private:
        int randNum(int min, int max);
        int divideArray(int data[], int start, int end, int length);
        bool swapItem(int& left, int& right);
        bool sortArray(int data[], int start, int end, int length);
};

#endif // FASTSORT_H
