#include <iostream>

using namespace std;
//tree
struct BinaryTreeNode {
    int m_value;
    BinaryTreeNode * m_left;
    BinaryTreeNode * m_right;

    BinaryTreeNode(){
        m_value = -1;
        m_left = NULL;
        m_right = NULL;
    }
};

void printBinaryTreePre( BinaryTreeNode * root ){
    if( root != NULL ){
        cout << root->m_value << " ";

        printBinaryTreePre( root->m_left );
        printBinaryTreePre( root->m_right );
    }
}
