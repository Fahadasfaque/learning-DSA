        //Print the nth fibonacci number


#include<iostream>
using namespace std;

main(){
    int a,b,c,i,n;
    a=1;
    b=0;
    i=1;
    cout<<"enter the nth term to print fibonacci numbers:";
    cin>>n;

    cout<<"fibonacci series upto "<<n<<" term: "<<endl;
    cout<<b<<" ";
    
    while(i<=n){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        i++;
    }
}