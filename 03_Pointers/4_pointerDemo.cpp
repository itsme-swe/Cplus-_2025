#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x = 10;

  int *y = &x;

  int *&z = y;

  cout << z;
  return 0;
}