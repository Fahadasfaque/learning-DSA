#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;

    if(num%5==0){
        cout<<"this number is divisible by five";
    }

    else if(num%3==0){
        cout<<"this number is divisible by three";
    }
    else{
        cout<<"this number nither divisible by five nor three";
    }
}