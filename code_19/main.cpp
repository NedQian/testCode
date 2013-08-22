#include <iostream>
#include "dataStruct.h"

using namespace std;

bool mirrorTree( BinaryTreeNode * root){
    if( root == NULL){
        return 1;
    }

    BinaryTreeNode * temp = root->m_left;
    root->m_left = root->m_right;
    root->m_right = temp;

    mirrorTree( root->m_left );
    mirrorTree( root->m_right );

    return 1;
}
int main()
{
    BinaryTreeNode bTree1[20];
    BinaryTreeNode bTree2[20];
    BinaryTreeNode * root1, * root2;

    for( int i = 0; i < 20; i++ ){
        bTree1[i].m_value = i;
        bTree2[i].m_value = i;
    }

    root1 = &bTree1[4];
    root1->m_left = &bTree1[8];
    root1->m_right = &bTree1[7];
    bTree1[8].m_left = &bTree1[9];
    bTree1[8].m_right = &bTree1[2];
    bTree1[2].m_left = &bTree1[5];
    bTree1[2].m_right = &bTree1[6];

    printBinaryTreePre( root1 );
    cout << endl;
    mirrorTree( root1 );
    printBinaryTreePre( root1 );

    return 0;
}
