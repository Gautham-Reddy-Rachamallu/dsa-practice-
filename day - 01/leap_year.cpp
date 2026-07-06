#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if(year%4==0){
        if(year%400==0){
            cout<<"it is a leap year";
        }
    }
    else
    {
        cout<<"it's not a leap year";
    }
    
}