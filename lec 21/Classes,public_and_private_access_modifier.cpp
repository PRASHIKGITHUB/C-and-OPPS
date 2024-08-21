#include<iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1,int b1, int c1); ////////////////// ---------------------------
    void getData() {                                             //                      |
         cout<<"The value of a is "<<a<<endl;                   //                      |
         cout<<"The value of b is "<<b<<endl;                   //                      |
         cout<<"The value of c is "<<c<<endl;                   //                      |
         cout<<"The value of d is "<<d<<endl;                   //                      |
         cout<<"The value of e is "<<e<<endl;                   //                      |
    }

};

void Employee :: setData(int a1,int b1,int c1) { //if i want to write setData function outside class wtite this way
    a = a1;
    b = b1;
    c = c1;

}

int main(){
    Employee harry;
    //harry.a = 123; ------> this will through error because "a" is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,5);
    harry.getData();
    // cout<<harry.a<<endl; //you can't even print it 
    // cout<<harry.b<<endl;
    // cout<<harry.c<<endl;
    cout<<harry.d<<endl;
    cout<<harry.e<<endl;
    return 0;
}