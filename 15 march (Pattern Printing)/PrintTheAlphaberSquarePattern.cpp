        // Print the alphaber square pattern
        // A B C D 
        // A B C D
        // A B C D
        // A B C D

#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter tha value of n: ";
    cin>>n;

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
                cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}