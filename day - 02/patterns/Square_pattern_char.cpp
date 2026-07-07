#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=0; j<n;j++){
            int k = (int) ch + j; // type casting takes place here 
            char l= char(k);
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}