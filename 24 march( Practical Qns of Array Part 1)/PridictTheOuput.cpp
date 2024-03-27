//Predict the output.

#include<iostream>
using namespace std;

int main()
{
int sub[50], i ;
for ( i = 0 ; i <= 48 ; i++ ) ;//<----(syntax error)
{
sub[i] = i ;
cout<<sub[i]<<endl ;
}
return 0;
}

//OUTPUT:-
//The C++ code has a mistake because there's a semicolon after the for loop. 
//This makes the loop empty, so the code inside the curly braces doesn't run as part of the loop.