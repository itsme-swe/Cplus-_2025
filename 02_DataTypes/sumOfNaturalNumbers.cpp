#include<bits/stdc++.h>
using namespace std; 

int main(){
  
  int n;
  int Sum;

  cout<<"Enter the value of n:\n";
  cin>>n;

  Sum = n * (n + 1) / 2;  // Formula to find the sum of n natural numbers5

  cout<<"The sum of n natural number is: "<< Sum;

  return 0;
}