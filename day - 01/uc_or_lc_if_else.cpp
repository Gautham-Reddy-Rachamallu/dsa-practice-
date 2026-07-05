#include<iostream>
using namespace std;
int main () {
    cout<<"enter the charecter"<<endl;
    char charec;
    cin>> charec;
    int char_value=(int)charec;
    if(char_value>=65&& char_value<=90){
        cout<<"the charecter "<<charec<<" is uppcase letter"<<endl;
    }
    else if (char_value>=97 && char_value<<122){
        cout<<"the charecter "<<charec<<" is lower case"<<endl;
    }
    else
    {
        cout<<"the charecter is neither a upper case nor a lower case"<<endl;
    }
    return 0;    
}