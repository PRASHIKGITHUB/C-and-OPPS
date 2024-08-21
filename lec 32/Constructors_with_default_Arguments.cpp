#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    public:
        simple(int a,int b=9){
            data1=a;
            data2=b;
        }
        void printdata(){
            cout<<"The value of data is "<<data1<< " and "<<data2<<endl;
        }
};
int main(){
    simple s(1);// If data isn't provided it will simply print 9 for b
    s.printdata();
    simple p(1,2);// Here data is provided
    p.printdata();
    return 0;
} 