#include<bits/stdc++.h>
using namespace std;
int main()
{
    [](){cout<<"Hello Welcome to C++11 Lambda"<<endl;}();
        
    auto sq = [](int x,int y)->int{ 
        auto sqx = [](int x)->int{return x *x;}(x);
        auto sqy = [](int y)->int{return y *y;}(y);
        auto xy =[](int x,int y)->int{return 2 * x *y;}(x,y);
        return sqx+sqy+xy;
    };
    cout<<endl<<sq(2,3);
    return 0;
}

