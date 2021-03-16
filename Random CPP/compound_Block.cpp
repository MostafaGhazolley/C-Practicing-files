#include <iostream>

using namespace std;

void CompoundBlock(void)
{
    int i=01;
    cout<<"First i\n"<<i<<'\n';
    {
        cout<<"First i\n"<<i<<'\n';
        int i=02;
        cout<<"Second i\n"<<i<<'\n';
        {
        cout<<"Second i\n"<<i<<'\n';
        int i=03;
        cout<<"Third i\n"<<i<<'\n';
        }
    }
    cout<<"First i\n"<<i<<'\n';
}
