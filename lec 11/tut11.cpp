#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)  UNCOMMENT OF THIS AND SEE THE DIFFERENCE BETWEEN THIS
    // {                             AND BELOW FOR LOOP ONE[1]
    // cout<<i<<endl;
    // if(i==2){
    //     break;
    //    }
    // }

    // for (int i = 0; i < 40; i++)  THIS IS[2]
    // {
    // if(i==2){
    //     break;  
    // }  
    // cout<<i<<endl;        
       
    // }

    // for (int i = 0; i <= 40; i++) //  <<<<<<< ^       
    // {                              //         |
    //     /* code */                 //         |
    //     if(i==2){                  //         |
    //         continue;   //IF i==2 IT WILL DO i++ AND WON'T PRINT 2
    //     }
    //     cout<<i<<endl;
    // }
    
    for (int i = 0; i <= 40; i++)
    {
        cout<<i<<endl;
        if(i==2){
            continue; // THIS CONTINUE WONT'T DO ANYTHING UNTILL IT'S "BREAK"
        }
    }
    

    return 0;
}