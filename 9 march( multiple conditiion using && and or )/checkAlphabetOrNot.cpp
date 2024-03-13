#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the charater = ";
    cin>>ch;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
    cout<<"this is an alphabet ";
    }
    else{
        cout<<"this is not an alphabet";
    }
    return 0;

}