#include <iostream>

using namespace std;
int reference_test(int& lhs, int& rhs)
{
    cout << lhs << rhs <<endl;
    int temp = lhs;
    lhs = rhs;
    rhs = temp;
    return 0;
}
int main()
{
    //cout << "Hello world!" << endl;
    int a = 10;
    int b = 20;
    reference_test(a, b);
    cout << a << b <<endl;
    return 0;
}
