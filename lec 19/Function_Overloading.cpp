// FUNCTION OVERLOADING
#include<iostream>
using namespace std;

int sum(float a , int b){  // nothing will happen if i write float instead of int
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a , int b , int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

//calculate the value of a cylinder
double volume(double r, int h){
    return (3.14*r*r*h);
}

//calculate the of cube
int volume(int a){
    return (a*a*a);
}

//rectangular box
int volume(int l,int b,int h){
    return (l*b*h);
}


int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The volume of cylinder is "<<volume(3,6)<<endl;
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of rectanfular box is "<<volume(3,7,6)<<endl;
    
    return 0;
}