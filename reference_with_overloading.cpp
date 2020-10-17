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

    int&& x = 1;
    pReference(x);            

    const int i = 10;
    pReference(i); //Only by pReference(const int & value)
    //Below functions would call pReference(const int & value) if pReference(int && value) wasn't provided
    pReference(std::move(j));
    pReference(std::move(x));
    pReference(std::move(i));
    pReference(getValue());
    pReference(3);
    return 0;
}
