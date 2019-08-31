#include<bits/stdc++.h>
using namespace std;
void fun(int x)
{
    cout<<__func__<<"***"<<x<<endl;
}
void fun_R(int & x)
{
    cout<<__func__<<"***"<<x<<endl;
}
void fun_CR(const int & x)
{
    cout<<__func__<<"***"<<x<<endl;
}
int main()
{
    const int y = 10;
    int x = 5;
    fun(5);
    fun(x);
    fun(y);
    
    //fun_R(5);//error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
    //bcz L-value reference can be initialized by only Modifiable l-values, not by R-values.
    //fun_R(y);//error: binding ‘const int’ to reference of type ‘int&’ discards qualifiers
    fun_R(x);
    
    //L-value reference to const can be initialized with Modifiable l-values, Non-modifiable l-values & R-Values.
    fun_CR(5);
    fun_CR(x);
    fun_CR(y);
    return 0;
}
