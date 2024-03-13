#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter the value of three side of tringle = ";
    cin>>side1>>side2>>side3;

    if(side1 == side2 && side2 == side3){
        cout<<"this tringle is equilateral tringle";
    }

    else if(side1 == side2 || side2 == side3 || side3 == side1){
        cout<<"this tringle is isoscalenes tringle";
    }
    else{
        cout<<"this tringle is scalene tringle";
    }
    return 0;
}