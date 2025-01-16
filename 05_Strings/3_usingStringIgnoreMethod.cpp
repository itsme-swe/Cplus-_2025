#include <bits/stdc++.h>

using namespace std;

int main()
{

  char fName[10];
  char lName[10];

  cout << "Enter your first name: ";
  cin.get(fName, 10);

  cin.ignore();

  cout << "Enter your last Name: ";
  cin.get(lName, 10);

  cout << "Your full name is " << fName << " " << lName << endl;

  return 0;
}