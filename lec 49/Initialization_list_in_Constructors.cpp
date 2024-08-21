/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<bits/stdc++.h>
using namespace std;
class Test
{
    int a; // a is first here
    int b;

public:
    // Test(int i, int j) : a(i), b(j) // assign a first a=i,b=j
    // Test(int i, int j) : b(j), a(i+b)//wont work 
    // Test(int i, int j) : a(i), b(a + j)//a=i,b=a+j/b=i+j
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}

