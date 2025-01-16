#include <iostream>

using namespace std;

int main()
{

  []()
  { cout << "Hello World"; }();

  cout << endl;

  [](int x, int y)
  { cout << "Sum of x and y is " << (x + y); }(10, 20);

  cout << endl;

  int a = 10;
  int b = 20;

  [a, b]()
  { cout << a << " " << b << endl; }(); // 10 20

  cout << endl;

  [&a, &b]()
  { cout << ++a << " " << ++b << endl; }(); // 11 21

  return 0;
}