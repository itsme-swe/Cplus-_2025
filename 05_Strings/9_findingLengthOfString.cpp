#include <iostream>

using namespace std;

int main()
{

  string str = "Welcome to jungle";

  int count = 0;

  string::iterator it;

  for (it = str.begin(); it != str.end(); it++)
  {
    count++;
  }

  cout << "The length of string is " << count << "\n";

  return 0;
}

// o/p: The length of string is 17