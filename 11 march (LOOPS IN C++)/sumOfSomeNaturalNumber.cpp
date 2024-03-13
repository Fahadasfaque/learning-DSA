#include<iostream>  
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter the n number";
    cin>>n;

    for(i=1; i<=n; i++){
        sum+=i;
        cout<<"sum of some natural number = "<<sum<<endl;
    }

}