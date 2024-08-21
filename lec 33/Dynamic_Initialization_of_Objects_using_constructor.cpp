#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interestrate;
    float returnValue;

    public:
        bankdeposit(){}//If this wasn't there it will throw error
        bankdeposit(int p,int y,float r);// r can be a value like 0.04
        bankdeposit(int p ,int y,int r);//r can be a value like 14
        void show();
};

bankdeposit :: bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    interestrate=r;
    returnValue=principal;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+r);
    }
}
bankdeposit :: bankdeposit(int p,int y,int r){
    principal=p;
    years=y;
    interestrate=(float)r/100;
    returnValue=principal;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+interestrate);
    }
    
}

void bankdeposit::show(){
    cout<<endl<<"Principal amount was "<<principal<<"Return value after "<<years<<" years is "<<returnValue<<endl;
}
int main(){
    bankdeposit bd1,bd2,bd3;//Default constructor should be mentioned in class as you are declaring objects
    
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p y and r "<<endl;
    cin>>p>>y>>r;
    bankdeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p y and r "<<endl;
    cin>>p>>y>>R;
    bankdeposit(p,y,R);
    //    bd1=bankdeposit(p,y,R); --->can be written like this

    bd1.show();
    return 0;
}