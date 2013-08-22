#include <iostream>
#include <stack>

#define LENGTH 5

using namespace std;

int main()
{
    stack<int>s;
    int inPut[LENGTH] = {1,2,3,4,5};

    int outPut[LENGTH] = {4,5,3,2,1};

    int inPlace = 0;
    bool isRight = false;

    for( int i = 0; i < LENGTH; i ++)
    {
        isRight = false;
        int value = outPut[i];
        if( !s.empty() )
        {
            if( s.top() == value )
            {
                s.pop();
                isRight = true;
                continue;
            }
        }

        for( ; inPlace < LENGTH; inPlace++ )
        {
            if( inPut[inPlace] != value )
                s.push(inPut[inPlace]);
            else
            {
                isRight = true;
            }

        }
        if ( !isRight )
            break;
    }
    cout << isRight << endl;
    return 0;
}
