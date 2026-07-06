#include<iostream>
using namespace std;
int main (){
    int num1,num2,num3;
    cout<<"enter the values of the three numbers "<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" is largest";
    }
    else if (num2>num1&&num2>num3)
    {
        cout<<num2<<" is largest"<<endl;
    }
    else if(num3>num1&&num2<num3)
    {
        cout<<num3<< " is largest"<<endl;
    }
    else
    {
        cout<<"any one number should be equal to another number ";
    }
    
    

}