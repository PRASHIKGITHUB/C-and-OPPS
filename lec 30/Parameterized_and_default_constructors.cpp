#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x,int y); // constructor declaration
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x,int y) // This is a Parameterized constructor as it takes 2 parameters
{
    a = x; //you could initialize this inside complex class
    b = y;
}
int main()
{
    //Implicit call
    complex a(4,6);
    a.printnumber();

    //Explicit call
    complex b =complex(5,7);
    b.printnumber();
    return 0;
}