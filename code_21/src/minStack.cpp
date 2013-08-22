#include "../include/minStack.h"

minStack::minStack()
{
    m_minValue = INT_MAX;
}

minStack::~minStack()
{
    //dtor
}

bool minStack::push(int value)
{
    m_minValue = ((m_minValue > value) ? value : m_minValue);
    m_minStack.push( m_minValue );
    m_dataStack.push( value );
    return 1;
}

int minStack::pop()
{
    m_minStack.pop();
    int top = m_dataStack.top();
    m_dataStack.pop();
    return top;
}

int minStack::getMin()
{
    return m_minStack.top();;
}

