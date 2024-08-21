#include<iostream>
using namespace std;

struct employee               //typedef struct employee--->struct employee=ep
{                             //{
    int eId;                  //    int eId;
    char favChar;             //    char favChar;     
    float salary;             //    float salary;
};                            //} ep;

typedef struct employee
{
    /* data */
}ep;



union money      //---->for better memory managnment         
{                       
    int rice; //4              
    char car;  //1      
    float pounds;    //4          
    //if you initialize a one data type in here you cannot use another data type unless you assign it with some value  
};                     

int main(){
    enum Meal{ breakfast, lunch, dinner};
    ep temp; 
    Meal m1 = lunch;
    cout<<m1<<endl;
    cout<<(m1==1)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    // struct employee prashik;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;


    // struct employee prashik;  // ep prashik
    // prashik.eId = 1;
    // prashik.favChar = 'c';
    // prashik.salary = 120000000;
    // cout<<"The value of employ id is "<<prashik.eId<<endl;
    // cout<<"The value of fav char is "<<prashik.favChar<<endl;
    // cout<<"The value of salary is "<<prashik.salary<<endl;

    return 0;
}