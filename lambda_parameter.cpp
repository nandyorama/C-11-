#include<bits/stdc++.h>
using namespace std;
int main()
{
    [](){cout<<"Hello Welcome to C++11 Lambda"<<endl;}();
    
    //1
    [](int x){int result = x *x; cout<<endl<<result<<endl;}(20);
    
    //2
    auto res = [](int x){int result = x *x; cout<<endl<<result<<endl;};
    res(50);
    
    return 0;
}
