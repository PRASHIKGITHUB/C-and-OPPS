// RECURSION & RECURSIVE FUNCTIONS
#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
    return 1;
    }
    return n * factorial(n-1);
}
// in this way factorial function will executive
// factorial(5)= 5 * factorial(4)
// factorial(5)= 5 * 4 * factorial(3)
// factorial(5)= 5 * 4 * 3 * factorial(2)
// factorial(5)= 5 * 4 * 3 * 2 * factorial(1)
// factorial(5)= 120


int fib(int n){
    if(n<2){
    return 1;
    }
    return fib(n-2)+fib(n-1);
}

// fib(5)
// fib(4)+fib(3)
// fib(3)+fib(2)+fib(2)+fin(1)

int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    //cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term at fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    
    return 0;
}