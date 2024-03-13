/*                                 Q.1: Calculating percentage of 5 subjects                                   */
#include<iostream>
using namespace std;
main(){
    int hindi,eng,math,phy,che,total,percentage;
    cout<<"enter the marks of hindi: ";
    cin>>hindi;
    cout<<"enter the marks of eng: ";
    cin>>eng;
    cout<<"enter the marks of math: ";
    cin>>math;
    cout<<"enter the marks of phy: ";
    cin>>phy;
    cout<<"enter the marks of che: ";
    cin>>che;
    percentage=(hindi+che+math+phy+che)/5;
    cout<<"percentage= "<<percentage<<"%";
}
/*
    output:-
    enter the marks of hindi: 50
    enter the marks of eng: 50
    enter the marks of math: 50
    enter the marks of phy: 50
    enter the marks of che: 50
    percentage= 50%
*/