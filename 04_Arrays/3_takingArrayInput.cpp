#include<bits/stdc++.h>
using namespace std; 

int main(){
  
  int n;

  cout << "Enter the size of an array: ";

  cin >> n;

  cout << "The size of an array is " << n << endl;;

  int arr[n];

  cout << "Enter the elements of an array: ";

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << endl;

  for (auto ele : arr ) {
    cout << ele << " ";
  }

  return 0;
}