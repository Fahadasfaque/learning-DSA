#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter the value of n1,n2 and n3";
    cin>>n1>>n2>>n3;
    cout<<endl;

    if(n1>n2 && n1>n3){
        cout<<"n1 number is greatest number among three number";
    }
    else if(n2>n1 && n2>n3){
        cout<<"n2 number is greatest number among three number";
    }
    else{
        cout<<"n3 number is greatest number among three number";
    }
}