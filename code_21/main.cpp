#include <iostream>
#include "include/minStack.h"

using namespace std;

int main()
{
    minStack * ms = new minStack();
    ms->push( 4 );
    ms->push( 2 );
    ms->push( 3 );
    ms->push( 2 );
    ms->push( 1 );

    for( int i = 0; i < 5; i++)
    {
        cout << ms->getMin() << endl;
        cout << "Pop " << ms->pop() << endl ;
    }

    delete ms;
    return 0;
}
