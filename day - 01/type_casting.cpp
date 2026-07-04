#include<iostream>
using namespace std;
int main() {


    bool male= true;
    int number= male;//implicity type casing small bytes to big bytes
    cout<<number<<endl;

    double amount;
    cout<<"enter the amount"<<endl; //explicit type cast done manually from big to small bytes by taking the input
    cin>>amount;
    int new_amount= (int) amount;
    cout<<new_amount<<endl;
    return 0;
}