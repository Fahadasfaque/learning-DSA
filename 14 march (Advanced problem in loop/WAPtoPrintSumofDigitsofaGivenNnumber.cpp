        //WAP to print sum of digits of a given number


#include<iostream>
using namespace std;

main(){
    int num, digit;

    cout<<"Enter the Number";
    cin >> num;

    int sum = 0;
    while (num > 0) {
        digit = num % 10; 
        sum = sum+digit;        
        num =num/10;            
    }

    cout<< "Sum of given digits: " << sum << endl;
}