#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=5; ; i+=5){
        if(i%7==0){
            cout<<"print that = "<<i<<endl;
            break;
        }

    }
}