            //Display this AP - 1,3,5,7,9.. upto ‘n’ terms. 


#include<iostream>
using namespace std;

main(){
    //given a.p: 1,3,5,7,9......
    int a,b,d,n;
    a=1;
    b=3;
    d=b-a;
    cout << "Enter the number of terms: ";
    cin>>n;
    cout << "Arithmetic Progression upto " << n << " terms:\n";
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+d;
    }

}