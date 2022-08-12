#include <iostream>
#include <vector>

class Sample {

public:

    Sample(int i_) : i(i_) {std::cout<<"Default Constructor"<<std::endl;}

    Sample(const Sample& s) : i(s.i) {std::cout<<"Copy Constructor"<<std::endl;}

private:

    int i;

};

int main() 

{

    std::vector<Sample> vs;

    //vs.reserve(20);

    vs.push_back(1);

    vs.push_back(2);

    vs.push_back(3);

    
    return 0;

}
