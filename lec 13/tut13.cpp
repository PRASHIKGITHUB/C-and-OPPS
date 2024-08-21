#include<iostream>
using namespace std;

int main(){
    //Array examples
    int marks[]={23,45,678,47};

    int mathmarks[4];
    mathmarks[0]=5674;   
    mathmarks[1]=5667; 
    mathmarks[2]=3567;  
    mathmarks[3]=5697;   

    //You can change the value of an array
    marks[2]=980;  
    cout<<"These are marks"<<endl;  // int marks[4] this will also run programme properly
    cout<<marks[0]<<endl;   //                   ^ any positive integer or no integer in this will run programme
    cout<<marks[1]<<endl;      
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are mathmarks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;   
    // cout<<mathmarks[2]<<endl<<endl;
    // cout<<mathmarks[3]<<endl<<endl;

    //using "for" loop

    // for (int i = 0; i < 4; i++<<endl)
    // {
    //  cout<<"The value of mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
    // }

    // cout<<endl;

    // Using "while" loop

    // int i=0;
    // while(i<4){
    //     cout<<"The value of mathmarks "<<i<<" is"<<mathmarks[i]<<endl;
    //     i++;
    // }

    // cout<<endl;

    //Using "do while" loop
    // int i=0;
    // do
    // {
    // cout<<"The value of mathmarks "<<i<<" is " <<mathmarks[i]<<endl;
    // i++;
    // } while (i<4);

    //pointers and array
    int* p=marks;
    cout<<"The value of *p is"<<*(p)<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<endl;
    cout<<"The address of p is"<<&p<<endl;
    cout<<"The address of p is"<<&p+1<<endl;
    cout<<"The address of p is"<<&p+2<<endl;
    cout<<"The address of p is"<<&p+3<<endl;
    return 0;
}