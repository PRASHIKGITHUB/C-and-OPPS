#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initializ the objects of its class
    // It is automatically invoked whenever an object is created

    complex(void); // constructor declaration
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void) // This is a default constructor as it accepts no parameters
{
    a = 10;
    b = 0;
    cout<<"complex invoked"<<endl;
}
int main()
{
    complex c;
    c.printnumber();
    return 0;
}

// Properties of Constructors

/*
1. It should be declared in the pulic section of the calss.
2. They are automaticall invoked whenever the object is created
3. They cannot rerturn values and do not have return types
4. It can have default arguments
5. We cannot refrer to their address 
*/