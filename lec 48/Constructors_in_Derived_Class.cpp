#include<bits/stdc++.h>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
   //base class ka execution phele hota hai
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
    //do base class hai toh order of classes
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
    //virtual class has max priority
    //if multiple virtual classes then order of classes
};

Case4:


*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
        //phele b and a Base1 and Base2 ko dedo respectively then run { inside program}
        {
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};

int main(){
    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}
