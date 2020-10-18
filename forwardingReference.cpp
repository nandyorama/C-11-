#include<bits/stdc++.h>
using namespace std;

template<class T>
void fR(T&& x)// x is a forwarding reference 
{ 
    cout<<x<<endl;
}

void nfR(int && x)
{
    cout<<x<<endl;
}
 
int main() 
{
    int i=9;
    fR(i); // argument is lvalue, calls f<int&>(int&)
    fR(0); // argument is rvalue, calls f<int>(int&&)
    //nfR(i);//Error as not binding to lvalue & not forwarding reference
    nfR(1);
    return 0;
}
 
