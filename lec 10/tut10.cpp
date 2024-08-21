#include<iostream>
#include<iomanip>
using namespace std;
int main(){
/*Loops in C++:
There are three types of loops in c++:
   1. For loop
   2. While loop
   3. do-while loop
*/
/*For loop in c++ */
   // int i=1;
   // cout<<i;
   // i++;

   //syntax for for loop
   //for(initialization; condition; updation)
   // {
   //     loop body (c++ code)
   // }

//    for (int i = 0; i <= 40; i++)
//    {
//        /* code */
//     cout<<i<<endl;
    
//    }
// Example of infinite for loop
   // for (int i = 0; 34 <= 40; i++)
   // {
   //     /* code */
   //  cout<<i<<endl;
    
   // }

   /*while loop in c++ */
   // syntax:
   // while(condition)
   // {
   //    c++ statements;
   // }

   // Printing 1 to 40 using while loop
   // int i=1;
   // while(i<=40){
   // cout<<i<<endl;
   // i++;
   // }

   // Example of infinite while loop
   // int i=1;
   // while (true){
   
   //    cout<<i<<endl;
   //    i++;      
   // }
   
   /* do while loop in c++ */
   // syntax:
   // do
   // {
   //    c++ statements;
   // }while(condition)

   // Printing 1 to 40 using while loop
   // int i=1;
   // do{
   // cout<<i<<endl;
   // i++;
   // }while(false);
   int T;
   cout<<"Which table do you want me to print "<<endl;    
   cin>>T;
   cout<<"The table of "<<T<<" is this ---->";
   cout<<endl;
   for (int i = 1; i <= 10; i++)
   {  
      cout<<setw(10)<<T*i<<endl;
      
   } 
    return 0;
}