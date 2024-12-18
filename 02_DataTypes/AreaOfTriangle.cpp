#include<bits/stdc++.h>
using namespace std; 

int main(){

  int Base;

  int Height;

  float Area;

  cout<<"Enter the value of base: ";
  cin>>Base;

  cout<<endl;

  cout<<"Enter the value of height: ";
  cin>>Height;

  Area = (float)(Base * Height) / 2;  // Here converting int Base and Height into float 

  cout<<"The area of triangle is "<<Area;

  return 0;
}