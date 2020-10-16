#include<bits/stdc++.h>
using namespace std;
class PrintUntilTenOrMore
{
public:
    PrintUntilTenOrMore() : goOn_(true) {}
 
    void operator()(int number)
    {
        if (number < 10 && goOn_)
        {
            std::cout << number << '\n';
        }
        else
        {
            goOn_ = false;
        }
    }
 
private:
    bool goOn_;
};
int main()
{
    //stateful
    std::vector<int> numbers = {8, 4, 3, 2, 10, 4, 2, 7, 3};
    std::for_each(numbers.begin(), numbers.end(), PrintUntilTenOrMore());
    
    //stateless
    auto first10 = std::find_if(numbers.begin(), numbers.end(), [](int number){return number >= 10;});
    std::for_each(numbers.begin(), first10, [](int number){std::cout << number << std::endl;});
    
    return 0;
}
