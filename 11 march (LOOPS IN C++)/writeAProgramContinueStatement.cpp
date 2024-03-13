#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the n number";
    cin>>n;

    for(i=0; i<=n; i++){
        if(i%3==0){
            continue;
        }
        else{
            cout<<"print number = "<<i<<endl;
        }
    }
}