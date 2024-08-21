#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are You!"<<endl;
        }
};

class Base2{
        public:
        void greet(){
            cout<<"Kaise Ho?"<<endl;
        }
};

class Derived:public Base1,public Base2{
    int a;

    public:
        void greet(){
            Base1::greet();
        } //this is to be done to resolve first ambiguity

};

class B{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};
class D:public B{
    int a;
    // D's new say() method will override base class's say() method 
    public:
    void say(){ //d.say() will call this function
        cout<<"Hello my beautiful people"<<endl;
    }
};
int main(){
    //Ambiguity 1;
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet(); konsa greet chalana hai? $$$$$$##$^%#%$#%@#%

    //Ambiguity 2;
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}