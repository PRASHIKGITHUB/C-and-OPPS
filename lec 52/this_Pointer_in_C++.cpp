#include<iostream>
using namespace std;
int cnt=0;
class A{
    int a;
    int m;
    public:
        void setData(int a){
            this->a = a;
        }

        A& setM(int m){
            this->m=m;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of m is "<<m<<endl;
            cnt++;
        }
};
//[this] is that operator(pointer,object) which invokes member function
int main(){
    A a;
    a.setData(4);
    a.getData();
    a.setM(69).getData();
    // cout<<cnt<<endl;
    return 0;
}