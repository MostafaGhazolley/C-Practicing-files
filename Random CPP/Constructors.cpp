#include <iostream>
#include <string>

using namespace std;

class ID{
public:
    ID(){cout<<"Name="<<Name<<endl<<"Nationality : "<<Nationality<<endl;}   //default constructor
private:
    string Name="Default";
    string Nationality="Default";
};

void ID_Cons(void)
{
    ID Mostafa; //Default constructor Called
    //and the output will be default...
    ID Ahmed();

    ID Gamal;

}
