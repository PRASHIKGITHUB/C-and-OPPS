#include<iostream>

using namespace std;
 int c=40;

// ************Built in data types**********8
//     int a,b,c ;
    
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a;
//     cout<<"Enter the value of b:"<<endl;
//     cin>>b;
//     c=a+b;
//     cout<<"the sum is" <<c<<endl;
//     cout<<"The value of global c is"<<::c; // "::"this is known as scope resolution operator -->to use particularly 
    //global values of our variables
    int main(){
    // **********Float, double and long double **********
    //  float  d = 34.4f;// or d=34.4F dono bhi chalege
    // long double e = 34.4l; //or e=34.4L dono bhi chalege
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;    
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;    
    // cout<<"The size of 34.4F is "<<sizeof(34.F)<<endl;    
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;    
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // **********Referance variables ********** 
    // Rohan Das----> Monty -----> Rohu -----> Dangerous Coder
    float x=455;
    float & y=x;
    cout<<x<<endl;  
    cout<<y<<endl;

    // **********Typecasting ********** 
    int a=45;
    float b=45.46;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;

    cout<<"the value of b is "<<(int)b<<endl; 
    cout<<"the value of b is "<<int(b)<<endl;
    int c= int(b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    return 0;
}