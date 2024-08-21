#include<iostream>
using namespace std;

inline int product(int a,int b){
    // Not recommended to use below lines with inline functions
    // Do not use inline with loop functions,switch functions
    // static int c=0; //this executes only once
    // c = c+1;//next time when this function runs,the value of c will be retained
    return a*b;
}

float moneyRecieved(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have"<<money<<" Rs in your bank account,you will recieve "<<moneyRecieved(money)<<"after 1 year"<<endl;
    cout<<"for VIP: If you have"<<money<<" Rs in your bank account,you will recieve "<<moneyRecieved(money,1.1)<<"after 1 year";

    return 0;
}