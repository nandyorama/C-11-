#include<bits/stdc++.h>
using namespace std;
int getVal()
{
    int i = 10;
    return i;
}
int main()
{

    //lvalue reference
    int &ref1 = getVal();// error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’

    const int &ref2 = getVal();
    
    //RValue reference
    int && ref3 = getVal();

    const int && ref4 = getVal();
    
    return 0;
}
