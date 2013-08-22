#include <iostream>
#include "dataStruct.h"
#include <queue>

using namespace std;

void printTreeByDepth( BinaryTreeNode * root )
{
    queue<BinaryTreeNode*> node;
    if( root != NULL )
    {
        node.push( root );
    }
    else
        return;
    while( !node.empty() )
    {
        BinaryTreeNode *temp = node.front();
        node.pop();
        if( temp->m_left != NULL )
            node.push( temp->m_left );
        if( temp->m_right != NULL )
            node.push( temp->m_right );
        cout << temp->m_value;

    }
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

    printTreeByDepth( root1 );
    cout << "Hello world!" << endl;
    return 0;
}
