#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    //Non-Const Reference can only bind to lvalue. Not to rvalue. 
    int &ref1 = x;
    //int &ref2 = 5;// error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’

    //Const Reference can bind to both lvalue & rvalue. 
    const int &ref3 = x;
    const int &ref4 = 5;
    
    //Rvalue Reference can only bind to rvale. Not to lvalue. 
    //int && ref5 = x;//error: cannot bind ‘int’ lvalue to ‘int&&’
    int && ref6 = 5;
    //const int && ref7 = x;//error: cannot bind ‘int’ lvalue to ‘int&&’
    const int && ref8 = 5;
    
    
    return 0;
}
