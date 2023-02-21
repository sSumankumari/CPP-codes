#include<iostream>
using namespace std;

// Base class
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        Employee(){}
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
NOTE:-
1. Default visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes public members of the derived class.
3. Private Visibility Mode: Public members of the base class becomes private members of the derived class.
4. Private members of the base class are never inherited.
*/

// Creating a Programmer class derivedfrom Employee Base class
class Programmer : Employee{
    public:
    int languageCode = 9;
    Programmer(int inpId){
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}