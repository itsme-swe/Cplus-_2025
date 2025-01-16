#include <iostream>

using namespace std;

int main()
{

  string str = "HelloWorld";

  string::reverse_iterator it;

  for (it = str.rbegin(); it != str.rend(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}

// o/p: d l r o W o l l e H