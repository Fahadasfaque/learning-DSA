#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    
    if(num>99 && num<999){
        cout<<"this number is three digit number";
    }
    else{
        cout<<"this number is not three digit number";

    }
}