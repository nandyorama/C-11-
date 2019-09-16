#include<bits/stdc++.h>
using namespace std;
void fun(){cout<<"FUN"<<endl;}
void fun1(){cout<<"FUN1"<<endl;}
struct printfunc
{
    void operator()(int x)const{
        cout<<x<<endl;
    }
};
int main()
{
    auto f = [](){
        fun();
        fun1();
    };
    f();
    
    //2 using functor i.e before c++11
    std::vector<int> vi;
    vi.push_back(1);
    vi.push_back(2);
    for_each(vi.begin(),vi.end(),printfunc());

    //3 in C++11
    struct 
    {
        void operator()(int x)const{
            cout<<x<<endl;
        }
    }printfunc11;

    for_each(vi.begin(),vi.end(),printfunc11);
    for_each(vi.begin(),vi.end(),[](int x){
        cout<<x<<endl;
    });
    return 0;
}
