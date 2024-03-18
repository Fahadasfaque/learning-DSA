        // Print the odd Number Triangle pattern
        // 1 
        // 1 3 
        // 1 3 5 
        // 1 3 5 7

#include<iostream>
using namespace std;

main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+2;
        }
        cout<<endl;
    }

}