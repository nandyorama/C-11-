#include<bits/stdc++.h>
using namespace std;
void pReference(int && value)
{
    cout<<__PRETTY_FUNCTION__<<"  **  "<<value<<endl;
}

void pReference(const int & value)
{
    cout<<__PRETTY_FUNCTION__<<"   **  "<<value<<endl;
}

void pReference(int & value)
{
    cout<<__PRETTY_FUNCTION__<<"   **  "<<value<<endl;
}

int getValue()
{
    int i =5;
    return i;
}
int main()
{
    int j = 20;
    pReference(j);
    const int i = 10;
    //Below functions would call pReference(const int & value) if pReference(int && value) wasn't provided
    pReference(i); 
    pReference(getValue());
    pReference(3);
    return 0;
}
