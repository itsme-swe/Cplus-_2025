// In this we'll try to swap the numbers using call by value mechanism

#include <iostream>

using namespace std;

void swap(int a, int b)
{
  int temp = a;

  a = b;

  b = temp;
}

int main()
{

  int a = 10;
  int b = 20;

  swap(a, b);

  cout << "a:" << a << "\n"
       << "b:" << b;

  return 0;
}

/*
Conclusion : call by value mechanism sae hum swap isliye nhi kar paye kyuki formal parameters mae agar koi changes hota hai toh vo actual parameters ko effect nhi karta hai

*/