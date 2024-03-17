#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Even numbers are = ";
    for(i=1; i<=100; i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}