#include<bits/stdc++.h>
using namespace std; 

int main(){
  
  int x = 10;

  int y = ++x;

  cout<<y<<" "<<x; // The value of x and y becomes 11.

  cout<<endl;

  y = x++;

  cout<<"Now the value of y after using post increment is: "<<y<<'\n';  // The value of y is 11.

  cout<<"But the value of x will be now: "<<x;  // But the value of x will be now 12.

  cout<<endl;

  int z = x++ * 2;
  cout<<"The value of z is :"<<z<<'\n'; // The value of z is 24 
  cout<<x;  // But x will be 13

  return 0;
}