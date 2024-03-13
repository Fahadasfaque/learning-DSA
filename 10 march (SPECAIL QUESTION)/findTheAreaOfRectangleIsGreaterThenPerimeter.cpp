#include<iostream>
using namespace std;
int main(){
    int l,w,area,perimeter;
    cout<<"enter the value of l and w = ";
    cin>>l>>w;

    area = l*w;
    cout<<"area of rectangle is = "<<area<<endl;

    perimeter = 2*(l+w);
    cout<<"perimeter of rectangle is = "<<perimeter<<endl;

    if(area > perimeter){
        cout<<"area of rectangle is greater than perimeter of rectangle";
    }
    else{
        cout<<"perimeter of rectangle is greater than area of rectangle";
    }
    
}