#include <iostream>
using namespace std;
class base
{
protected:  //Protected members can be accessed by member functions of derived class as in case of private members of base class by it's own member functions
    int a;   //Protected members are accessible within the class where they are declared and by derived classes.
    //They cannot be accessed by code outside the class hierarchy (e.g., from an object of the class).

private:
    int b;
};
/*
For a protected member:
                            Public Derivation      	Private Derivation    	Protected Derivation
1. Private members           	Not Inherited           Not Inherited           Not Inherited
2. Protected members           Protected               Private                 Protected
3. Public members           	Public	                Private                 Protected
*/
class derived : protected base
{
    // private:
    // int b;
    // protected:
    // int a;
};
int main()
{
    base b;
    derived d;
    //cout << b.a; -->Will not work since a is protedted in both base as well as derived class
    return 0;
}
