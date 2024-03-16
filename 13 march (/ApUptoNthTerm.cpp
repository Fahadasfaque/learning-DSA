            //Display this AP - 1,3,5,7,9.. upto ‘n’ terms. 


#include<iostream>
using namespace std;

main(){
    //given a.p
    int a,b,d,n;
    a=1;
    b=3;
    d=b-a;
    cout<<"enter the Nth term for A.P"<<endl;
    cin>>n;
    cout<<"A.P=";
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+d;
    }

}