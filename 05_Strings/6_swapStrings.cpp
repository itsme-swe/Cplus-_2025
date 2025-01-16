#include <iostream>

using namespace std;

int main()
{

  string s1 = "Hello";

  string s2 = "World";

  string temp = s1;
  s1 = s2;

  s2 = temp;

  cout << "s1: " << s1 << endl;

  cout << "s2: " << s2;

  cout << endl;

  s1.swap(s2);

  cout << s1;

  return 0;
}