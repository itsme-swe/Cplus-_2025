#include <bits/stdc++.h>
using namespace std;

int main()
{

  int arr[5] = {2, 4, 6, 8, 10};

  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "The size of array is: " << n;

  cout << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "\n";
  }

  return 0;
}