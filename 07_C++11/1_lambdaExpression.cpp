#include <iostream>

using namespace std;

int main()
{

  []()
  { cout << "Hello World"; }();

  cout << endl;

  [](int x, int y)
  { cout << "Sum of x and y is " << (x + y); }(10, 20);

  return 0;
}