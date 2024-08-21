#include<iostream>
using namespace std;
class Y; //forward declaration
class X{
    int data;
    public:
        void setdata(int value){
            data=value;
        }
        friend void add(X,Y);
};

class Y{
    int num;
    public:
        void setvalue(int value){
            num=value;
        }
        friend void add(X,Y);
};

void add(X o1,Y o2){ //this function is a friend function of both the classes X and Y
    cout<<"summing data of X and Y objects gives me "<< o1.data+o2.num<<endl;;
}
int main(){
    X a;
    a.setdata(3);

    Y b;
    b.setvalue(5);

    add(a,b);
    return 0;
}