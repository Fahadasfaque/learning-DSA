            //Print The solid reactangle pattern

            // *****
            // *****
            // *****

#include<iostream>
using namespace std;

main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=1;j<n+1;j++){
            cout<<" *";
        }
        cout<<endl;
    }

}