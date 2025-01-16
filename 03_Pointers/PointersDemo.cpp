#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 10;

  int *p = &a;

  cout << "Value of a: " << a << endl;

  cout << "Address of a: " << &a << endl;

  cout << "p is holding the address of variable a: " << p << endl;

  cout << "The address of p is: " << &p << endl;

  cout << "Now dereferencing *P is holding the value of a: " << *p << endl;

  return 0;
}