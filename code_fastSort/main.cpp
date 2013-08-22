#include <iostream>
#include "include/fastSort.h"

using namespace std;

int main()
{
    int data[10] = {4,4};
    fastSort fSort( data, 0, 0, 1);
    for (int i=0; i<10; i++)
            cout << " " << i << "=" << data[i] << ",";
    return 0;
}
