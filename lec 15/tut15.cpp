 #include<iostream>
using namespace std;

//Function ptototype
//type function-name (argument);
//int sum(int a,int b)--->acceptable
//int sum(int a,b)---->not acceptable
int sum(int,int);//---->acceptable
//void g(void);//---->acceptable
void g();//---->acceptable

int main(){
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;    
}
   // where as Formal parameters a and b will be taking the values from actual parameters num1 and num2
int sum(int a,int b){ // |this whole text also can be written before int main()
    int c=a+b;        // |but we use function prototype that tell compiler that sum() may be found after
    return c;         // |return 0;
}                     // |

void g(){
    cout<<"Abe sale,mai idhar udhar nikal jata hu";
}