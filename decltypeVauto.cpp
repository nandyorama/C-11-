#include<iostrema>
using namespace std;
int main()
{
 int x;
 decltype(x) y=x+5; //decltype helps to extract type
 cout<<typeid(y).name()<<endl;
 
 auto xx = 4; //auto helps to declare a variable with particular type
 cout<<typeid(xx).name()<<endl;
 return 0;
}
