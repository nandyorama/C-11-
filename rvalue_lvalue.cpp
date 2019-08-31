#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    
    int &ref1 = x;
    //int &ref2 = 5;// error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’

    const int &ref3 = x;
    const int &ref4 = 5;
    
    //int && ref5 = x;//error: cannot bind ‘int’ lvalue to ‘int&&’
    int && ref6 = 5;
    
    //const int && ref7 = x;//error: cannot bind ‘int’ lvalue to ‘int&&’
    const int && ref8 = 5;
    
    
    return 0;
}
