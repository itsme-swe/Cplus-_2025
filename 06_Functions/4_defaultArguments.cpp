#include <iostream>

using namespace std;

// default argument
int maxi(int a, int b, int c = 0)
{

  return a > b && a > c ? a : (b > c ? b : c);
}

int main()
{

  cout << maxi(10, 50) << endl;

  cout << maxi(20, 15, 10);

  return 0;
}