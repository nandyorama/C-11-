#include<bits/stdc++.h>
using namespace std;
void fun_Rf(int && rf)
{
    cout<<__func__<<"**"<<rf<<endl;
}
void fun_CRf(int && rf)
{
    cout<<__func__<<"**"<<rf<<endl;
}
void fun_CLf(const int & rf)
{
    cout<<__func__<<"**"<<rf<<endl;
}
int main()
{
    int x = 5;
    int &lr = x;
    int &&rf = 5;
    //int &&rf = x;//error: cannot bind ‘int’ lvalue to ‘int&&’
    
    //C++11 R-value reference can be initialized by only R-Values.
    fun_Rf(5);
    //fun_Rf(x);//error: cannot bind ‘int’ lvalue to ‘int&&’
    //fun_Rf(rf);//error: cannot bind ‘int’ lvalue to ‘int&&’
    
    //C++11 R-value reference to const can be initialized by only R-Values.
    fun_CRf(5);
    //fun_CRf(x);//error: cannot bind ‘int’ lvalue to ‘int&&’
    //fun_CRf(rf);//error: cannot bind ‘int’ lvalue to ‘int&&’

    fun_CLf(5);
    fun_CLf(x);
    fun_CLf(rf);
    
    return 0;
}
