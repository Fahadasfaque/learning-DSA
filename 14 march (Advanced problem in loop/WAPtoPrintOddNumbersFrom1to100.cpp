        //WAP to print odd numbers from 1 to 100

#include<iostream>
using namespace std;

main(){
    cout<<"Odd Number from 1 to 100:"<<endl;
    for(int i=1;i<=100;i++){
        if(i%2 !=0){
            cout<<i<<" ";
        }
    }
}