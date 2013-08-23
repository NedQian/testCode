/*
Question:
    Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?

NedQian, qianchengood@gmail.com
*/

#include <iostream>

using namespace std;

bool uniqChar ( char * input, int length )
{
    if( input == NULL || length == 0 )
        return 1;
    else if( length < 0 )
        return 0;

    int charSet = 0;

    //only a-z exist
    for( int i = 0; i < length; i++ )
    {
        int temp = input[i] - 'a';
        if( ( charSet & ( 1 << temp ) ) > 0 )
        {
            return false;
        }
        charSet |= ( 1 << temp );
    }
    return true;
}

