        //Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include<iostream>
using namespace std;

main(){

        //given a.p: 4,7,10,13,16......
    int a,b,d,n;
    a=4;
    b=7;
    d=b-a;
    cout << "Enter the number of terms: ";
    cin>>n;
    cout << "Arithmetic Progression upto " << n << " terms:\n";
    for(int i=1;i<=n;i++){
        cout<<a<<", ";
        a=a+d;
    }

}