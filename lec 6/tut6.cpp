// there are two types of header files:
// 1. system header files: this comes with the compiler
#include<iostream>
// 2. user defined header file: it is written by programmer
//#include"this.h"---> this will produce an error if "this.h" is not present in thr current directory

using namespace std;

int main(){
    int a=4,b=5;
    cout<<"operators in c++ \n";/*endl is same as \n that means next line*/
    // Arithmetic operators
    cout<<"following are the operators in c++";            
    cout<<"\nthe value of a+b is "<<a+b ;
    cout<<"\nthe value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment operators --> used to assign values to variables
    // int a=3, b=9;
    // char d="d";

    //comparision operators
    //cout<<"following are the comparision operators in c++"endl;
    cout<<"the value of a==b is" <<(a==b)<<endl;
    cout<<"the value of a!=b is" <<(a!=b)<<endl;
    cout<<"the value of a>=b is" <<(a>=b)<<endl;    
    cout<<"the value of a<=b is" <<(a<=b)<<endl;
    cout<<"the value of a>b is" <<(a>b)<<endl;    
    cout<<"the value of a>b is" <<(a<b)<<endl; 

    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"the value of logical And operator ((a==b) && (a<b)) is:" <<((a==b) && (a<b))<<endl; 
    cout<<"the value of logical Or operator ((a==b) || (a<b)) is:" <<((a==b) || (a<b))<<endl; 
    cout<<"the value of logical Or operator (!(a==b)) is:" <<(!(a==b))<<endl; 

    return 0;
}