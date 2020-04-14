#include<bits/stdc++.h>
using namespace std;
void pReference(int && value)
{
    cout<<__PRETTY_FUNCTION__<<"**"<<value<<endl;
}
void pReference(int & value)
{
    cout<<__PRETTY_FUNCTION__<<"**"<<value<<endl;
}

int getValue()
{
    int i =5;
    return i;
}
int main()
{
    int i = 10;
    pReference(i);
    pReference(getValue());
    return 0;
}
