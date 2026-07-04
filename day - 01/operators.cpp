#include<iostream>
using namespace std;
int main(){
    int a=12, b=6;
    double c=2.25;

    //ARTHEMATIC OPERATORS
    cout<<"sum is "<< a+c<<endl;
    cout<<"difference is "<< a-c<<endl;
    cout<<"multiplication is "<< a*c<<endl;
    cout<<"division is "<< a/c<<endl;
    cout<<"modulous is "<<(b % (int)c)<<endl;

    //RELATIONAL OPERATORS 
    cout<<(3>5)<<endl;
    cout<<(3<5)<<endl;
    cout<<(3==5)<<endl;
    cout<<(3!=5)<<endl;
    cout<<(3>=5)<<endl;
    cout<<(3<=5)<<endl;

    //LOGICAL OPERATORS
    cout<<((3>5)||(3<5))<<endl;//OR
    cout<<((3>5)&&(3<5))<<endl;//AND
    cout<<((3<=5)!=(3>5))<<endl;//NOT


}