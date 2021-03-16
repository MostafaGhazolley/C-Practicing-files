#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person //normal structure
{
    string name;
    string lastname;
    unsigned age;
};

/* Sub-Function call to the main or copied, and will work perfectly. */
void StructureS(void)
{
    Person StudentA;    //declare a StudentA as a structure...
    StudentA.name="Mostafa";
    StudentA.lastname="Ghazolley";
    StudentA.age=27;
    cout<<StudentA.name<<'\t'<<StudentA.lastname<<endl<<StudentA.age<<endl;
}

struct PERSON //creating a constructor
{
    PERSON(string Fname,string Lname, unsigned AGE):FirstName(Fname),LastName(Lname),AgeN(AGE){cout<<"Ctor"<<endl;};
    //Previous Line shows that if i write a Command Line that has 3 arguments...
    //it will fill the structure members with the values written...

    ~PERSON(){cout<<"De-Structor occurs"<<endl;}//Any Constructor... De-Constructed by default at the end of the program...
    //or can be done manually by writing that command line "~PERSON(CONSTRUCTOR_NAME);"

    PERSON(const PERSON &p)=default;//declare a new structure
    PERSON& operator=(const PERSON& p)=default;//copy assignment operator
    PERSON(PERSON&& P)=default;//Move assignment operator

    string FirstName;
    string LastName;
    unsigned AgeN;

};

void ConstructorS(void)
{
    //PERSON StudentB;  can't be used that way anymore... ((Compiler error)).
    PERSON StudentB("Mostafa","Ghazolley",27);
    cout<<StudentB.FirstName<<'\t'<<StudentB.LastName<<endl<<StudentB.AgeN<<endl;

}

void CopyConstructorS(void)
{
    cout<<"Copy-ConstructorS"<<endl;
     PERSON StudentC("Mostafa","Ghazolley",27);
     PERSON StudentD(StudentC); //thats the way to copy all structure members from StudentC to StudentD...
    cout<<StudentC.FirstName<<'\t'<<StudentC.LastName<<endl<<StudentC.AgeN<<endl;
    cout<<StudentD.FirstName<<'\t'<<StudentD.LastName<<endl<<StudentD.AgeN<<endl;
}

void MoveConstructorS(void)
{
    cout<<"MOVE_CONSTRUCTOR_FUNCTION_PERINTS"<<endl;
    PERSON StudentE("Mostafa","Ghazolley",27);
    PERSON StudentF(move(StudentE)); //Move StudentE to StudentF
    //StudentX= move(studentF); //
    //cout<<StudentF<<endl;
    cout<<StudentF.FirstName<<'\t'<<StudentF.LastName<<endl<<StudentF.AgeN<<endl;
    cout<<StudentE.FirstName<<'\t'<<StudentE.LastName<<endl<<StudentE.AgeN<<endl;
    //^^^^
    //the Student E will copy garbage value, as it has moved to Student F...
    //[[UNDEFINED-BEHAVIOUR]]
    //and in other compilers... may lead to compiler error...

    cout<<"END_MOVE_CONSTRUCTOR_FUNCION"<<endl;
}
