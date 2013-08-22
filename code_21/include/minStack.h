#ifndef MINSTACK_H
#define MINSTACK_H

#include <stack>
#include <limits.h>
#include <iostream>

using namespace std;

class minStack
{
    public:
        minStack();
        virtual ~minStack();

        bool push( int value );
        int pop();
        int getMin();
    private:
        stack<int> m_dataStack;
        stack<int> m_minStack;
        int m_minValue;
        int m_pValue;
};

#endif // MINSTACK_H
