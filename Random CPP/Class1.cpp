#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct VEC8{ //not usually used that way!!!
private:
    unsigned x;
    unsigned y;
    unsigned z;
public:
    VEC8(unsigned x,unsigned y,unsigned z):x(x),y(y),z(z) {}
    unsigned sum=x+y+z;

};

class VEC{
private:
    unsigned int x;
    unsigned int y;
    unsigned int z;
public:
    VEC(); //default clearing...
    VEC(unsigned x,unsigned y,unsigned z):x(x),y(y),z(z) {}
    unsigned sum=x+y+z;
    unsigned int size(){return 3;}
};

void Class1(void)
{
    VEC8 v2(51,94,25);
    VEC v(51,35,94);
    cout<<"v2=:"<<v2.sum<<endl;
    cout<<"v=:"<<v.sum<<endl;
    cout<<"sizer of v=:"<<v.size()<<endl;
}
