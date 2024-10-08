#include <iostream>
using namespace std;
class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base::getData1()
{
    return data1;
}
int Base::getData2()
{
    return data2;
}

class Derived : public Base // class is being derived publically  [all the commented member function and data variables are here as private and public respectively]
{
    int data3;
    //int data1;

public:
    // int data2;
    //  void setData();
    // int getData1();
    // int getData2();
    void process();
    void display();
};

void Derived::process()
{
    data3 = data2 * getData1(); // You can use getData1() since it's public
}
void Derived::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 1 is " << data2 << endl;
    cout << "Value of data 1 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData();
    cout<<
    der.process();
    der.display();
    return 0;
}