# include<iostream>

using namespace std;
int glo=6;
void sum(){
cout<< glo<<endl;
}

int main(){
    int glo=9;
    glo=78;
    // int a = 5;
    // int b = 89;
    int a=5, b=89;
    float pi=3.14;
    char c='u';
    bool is = true;
    sum();
    cout<<glo<<endl<< is<<endl; 
    cout<<"this is tutorial 4.\n here the value of a is "<<a<<".\n the value of b is "<<b;
    cout<<"\n the value of pi is "<<pi;
    cout<<"\n the value of c is "<<c;
    return 0;
}    