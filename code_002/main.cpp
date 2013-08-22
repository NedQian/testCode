#include <iostream>
#include <string.h>
using namespace std;
bool replaceSpace( char * str, int maxLength ){
    if( str == NULL or maxLength <= 0)
        return 0;
    int length = strlen( str );
    int spaceNum = 0;
    for( int i = 0; i < length; i++)
        if( str[i] == ' ' ){
            spaceNum ++;
        }
    int newLength = length + spaceNum * 2;
    if( newLength > maxLength )
        return 0;

    int pStrNew = newLength;
    int pStrOld = length;
    while( pStrNew != pStrOld ){
        if( str[pStrOld] != ' ' ){
            str[pStrNew --] = str[pStrOld];
        }
        else {
            str[pStrNew --] = '0';
            str[pStrNew --] = '2';
            str[pStrNew --] = '%';
        }
        pStrOld --;
    }
    return 1;
}
int main()
{
    //char str[31] = "hello world, everyone!";
    //char str[31] = "hello,world,everyone!";
    char str[31] = "";
    replaceSpace( str, 30);
    cout << str;
    return 0;
}
