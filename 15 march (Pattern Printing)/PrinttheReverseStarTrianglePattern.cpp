        // Print the reverse star triangle pattern
        // ****
        // ***
        // **
        // *

#include<iostream>
using namespace std;

main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}