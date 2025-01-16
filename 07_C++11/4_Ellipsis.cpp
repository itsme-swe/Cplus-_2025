#include <iostream>
#include <cstdarg>

using namespace std;

int sum(int n, ...)
{
  va_list list;
  va_start(list, n);

  int x;
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    x = va_arg(list, int);
    sum += x;
  }

  va_end(list);

  return sum;
}

int main()
{
  cout << sum(4, 10, 10, 10, 10) << endl;

  cout << sum(3, 10, 20, 30) << endl;
  return 0;
}