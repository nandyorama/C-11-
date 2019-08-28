#include<bits/stdc++.h>
using namespace std;
int main()
{
    [](){cout<<"Hello Welcome to C++11 Lambda"<<endl;}();
    
    //1
    auto result = [](int value)->int{return value+1;}(10);
    cout<<result;
    
    //2
    auto f = [](int value)->int{return value+1;};
    cout<<f(10);

    return 0;    
}
