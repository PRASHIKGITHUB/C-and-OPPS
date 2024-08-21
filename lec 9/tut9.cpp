#include<iostream>
using namespace std;
int main(){
// cout<<"this is tutorial 9";
int age;
cout<<"Tell me your age "<<endl;
cin>>age;

// 1.Selection control structure:if else-if else ladder
// if((age<18) && (age>0)){
//     cout<<"You cannot come to my party"<<endl;
// }
// else if(age==18){
//     cout<<"You can enter party but you will get a kid pass"<<endl;
// }
// else if(age<=0){
//     cout<<"You are not yet born bacche"<<endl;
// }
// else if(age>18){ //  OR  only "else{" will also be fine because only one condition will remain 
//     cout<<"You can come to the party"<<endl;
// }

// 2.Selection control structure:Switch case statements
switch (age)
{
    case 18:  // if this is true it will print this cout only
    cout<<"You are 18"<<endl;
    break;// if i do not use break and my my first case is true the it will print you are 18 with the below statements of couts
    case 22:   
    cout<<"You are 22"<<endl;
    break;
    case 2:  
    cout<<"You are 2"<<endl;
    break;

    default:
    cout<<"No special cases"<<endl;
    break;
}
    cout<<"Done with switch cases"<<endl;
    return 0;
}