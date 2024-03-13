#include<iostream>
using namespace std;
int main(){
  int r;
  int area,circumference;
  cout<<"enter the value of r";
  cin>>r;
area = 3.14*r*r;
    cout<<"area of circle  = "<<area<<endl;

circumference = 2*3.14*r;
cout<<"circumference of circle = "<<circumference<<endl;
  if( area > circumference ){
    cout<<"area of circle is greater than circumference = ";
  }
  else{
    cout<<"area of circle is not greater than circumference = ";
  }
}
   