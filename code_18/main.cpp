#include <iostream>
#include "dataStruct.h"

using namespace std;

bool isSame( BinaryTreeNode * left, BinaryTreeNode * right ){
    if(right == NULL ){
        return 1;
    }
    else if( left == NULL ){
        return 0;
    }
    else if( left->m_value == right->m_value ){
        return isSame( left->m_left, right->m_left ) && isSame( left->m_right, right->m_right );
    }
    return 0;
}

bool checkIsSame( BinaryTreeNode * whole, BinaryTreeNode * part ){
    bool status = isSame( whole, part );
    if( !status ){
        if( whole->m_left )
            return checkIsSame( whole->m_left, part );
        else if( whole->m_right )
            return checkIsSame( whole->m_right, part );
    }
    return status;
}

int main()
{
    BinaryTreeNode bTree1[20];
    BinaryTreeNode bTree2[20];
    BinaryTreeNode * whole, * part;

    for( int i = 0; i < 20; i++ ){
        bTree1[i].m_value = i;
        bTree2[i].m_value = i;
    }

    whole = &bTree1[4];
    whole->m_left = &bTree1[8];
    whole->m_right = &bTree1[7];
    bTree1[8].m_left = &bTree1[9];
    bTree1[8].m_right = &bTree1[2];
    bTree1[2].m_left = &bTree1[5];
    bTree1[2].m_right = &bTree1[6];

    part = &bTree2[8];
    part->m_left = &bTree2[9];
    part->m_right = &bTree2[2];


    whole = & bTree1[19];
    part = & bTree2[19];
    BinaryTreeNode * nTree = NULL;


    bool result = checkIsSame( whole, part );
    if ( result )
        cout << "same" << endl;
    else
        cout << "Not same" << endl;
    return 0;
}
