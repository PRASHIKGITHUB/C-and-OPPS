#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.69;
    }
    Employee() {
        
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Private visibility Mode: Public members of the base class becomes private members of the derived class
3. Public visibility Mode: Public members of the base class becomes public members of the derived class
4. Private members are never inherited [inheritance is all about public and protected ]
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : Employee
{
public:
    // id and salary is private for this class's instances
    int languagecode;
    Programmer(int inpId)
    {
        id = inpId;
        // salary=inpId;
        languagecode = 9;
    }
    void getdata(){
        cout<<id<<endl;
        cout<<salary<<endl;
    }

};

int main()
{
    Employee harry(1), rohan(5);

//Both will work
    // Employee harry, rohan;
    // harry = Employee(1);
    // rohan = Employee(5);

    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillf(10); // it will call Programmar, default Employee constructor as well
    // cout<<skillf.id<<endl; Since id is private you cannot write this
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    return 0;
}