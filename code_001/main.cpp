#include <iostream>

using namespace std;
bool findQ(int* P, int Q, int width, int height)
{
    int m = 0;
    int n = height-1;
    bool isFind = false;
    while(P != NULL && width >0 && height > 0 && m < width && n >= 0 ){
        if( P[m * width + n] > Q )
            n--;
        else if ( P[m * width + n] < Q )
            m++;
        else if ( P[m * width + n] == Q ){
                isFind = true;
                break;
        }
    }
    return isFind;

}
int main()
{
    //cout << "Hello world!" << endl;
    int P[16] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
    int Q = 5;
    int k[2];
    cout << findQ( k, Q, 4, 4 ) <<endl;

    return 0;
}
