#include<bits/stdc++.h>
using namespace std;
int main()
{
    [](){cout<<"Hello Welcome to C++11 Lambda"<<endl;}();
        
    int xx = 100;
    //[]()->int{xx++;return xx;}();//error: ‘xx’ is not captured
    
    //By Reference
    auto result = [&]()->int{xx++;return xx;}();
    cout<<endl<<result<<endl;//101
    
    int yy = 0;
    [&,xx](int a) mutable { yy = ++xx + a;}(5);
    cout<<endl<<"--"<<yy<<"--"<<xx<<endl;//107--101

    
    //Use mutable with return
    int yy = 0;
    result = [&,xx](int a) mutable ->int { yy = ++xx + a;return yy;}(5);
    cout<<endl<<result<<"--"<<yy<<"--"<<xx<<endl;//107--107--101

    return 0;
}
