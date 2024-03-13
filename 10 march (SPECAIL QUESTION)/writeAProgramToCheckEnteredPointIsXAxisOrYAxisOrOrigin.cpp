#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the point of x and y";
    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"point lies is on origin";
    }
    else if(x==0){
        cout<<"point lies is on x-axis";
    }
    else if(y==0){
        cout<<"point lies is on y-axis";
    }
    else{
        cout<<"point lies neither x-axis nor y-axis";
    }
}