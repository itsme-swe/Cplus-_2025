#include <bits/stdc++.h>
using namespace std;

int main()
{

  int x = 10;

  int y = 20;

  int *P;

  P = &x;

  int *ptr = &y;

  cout << "Value present inside x is: " << x << "\n"; // opt ›› 10

  cout << "Value present inside &x is: " << &x << "\n"; // opt ›› 0x61ff08 address of variable x

  cout << "Value present inside P is: " << P << "\n"; // opt ›› 0x61ff08 Pointer P is holding the address of variable x

  cout << "Value present inside &P is: " << &P << "\n"; // opt›› Address of pointer P 0x61ff00

  cout << "Value present inside *P is: " << *P << "\n"; // opt›› Dereferencing pointer P to get the value of variable x.

  cout << endl;

  cout << &y << "\n";

  cout << ptr << "\n";

  cout << *ptr << "\n";

  return 0;
}