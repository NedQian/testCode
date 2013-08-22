#include <iostream>

using namespace std;
#define MAX_LENGTH 100

int main()
{
    int num[MAX_LENGTH];
    int n;
    cin >> n ;
    if ( n < 1 or n > MAX_LENGTH)
        cout << "Error n is negative";

    for ( int i = 0; i < n; i++)
    {
        num[i] = 0;
    }
    num[n-1] = 1;
    int count = 1;

    while ( count > 0)
    {
        int add = 1;
        for ( int i = n - 1; i >= 0; i -- )
        {
            int temp = num[i];
            num[i] = ( temp + add ) % 10;
            add = ( temp + add ) / 10;
        }
        int tempCount = 0;
        bool flag = false;
        for ( int i = 0; i < n; i++)
        {
            tempCount += num[i];
            if ( num[i] > 0 )
                flag =true;
            if ( flag == true )
                cout << num[i];
        }
        cout << endl;
        count = tempCount;
    }

    return 0;
}
