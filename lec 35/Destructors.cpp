#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
// Run this program to more about this
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number "<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;

    }
    cout<<"Back to main"<<endl;
    //when you exit any blocks the objects initialized in that scope will get destroyed(destructor is called) once the code is executed of that particular block
    return 0;
}