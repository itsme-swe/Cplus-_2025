#include <bits/stdc++.h>

using namespace std;

int main()
{

  array<int, 5> arr = {10, 5, 90, 81, 25};

  int maxValue = INT_MIN;

  int minValue = INT_MAX;

  int n = arr.size();

  cout << "The size of array is: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > maxValue)
    {
      maxValue = arr[i];
    }
  }

  cout << endl;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < minValue)
    {
      minValue = arr[i];
    }
  }

  cout << "The max value in array is: " << maxValue << endl;

  cout << "The min value in array is: " << minValue << endl;

  return 0;
}

// o/p : The max value in array is: 90

// o/p: The min value in array is: 5