#include <iostream>

using namespace std;

int main()
{

  string str = "HELlO";

  for (int i = 0; str[i] != '\0'; i++)
  {

    if (str[i] >= 65 && str[i] <= 90)
    {
      str[i] += 32;
    }
  }

  cout << str;

  return 0;
}