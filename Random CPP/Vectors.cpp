#include <iostream>
#include <string>
#include <vector>

using namespace std;

void VectorS(void)
{
    vector<int> ivec={1,5,9};   //use C++14 ++ in compiling, other wise u will get compiler error!
    cout<<"size:"<<ivec.size()<<'\n';
    ivec.push_back(15); //can only push 1 element at a time
    //ivec.push_back(15,16); will lead to compiler error...
    cout<<"size:"<<ivec.size()<<'\n';

}

