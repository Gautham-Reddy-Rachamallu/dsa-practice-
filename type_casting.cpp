#include<iostream>
using namespace std;
int main() {


    bool male= true;
    int number= male;//implicity type casing small bytes to big bytes
    cout<<number<<endl;

    double amount=12345.87685;//explicit type cast done manually from big to small bytes
    int new_amount= (int) amount;
    cout<<new_amount<<endl;
    return 0;
}