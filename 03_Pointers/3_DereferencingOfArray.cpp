#include<bits/stdc++.h>
using namespace std; 

int main(){
  
  int arr[] = {2, 4, 6, 8, 10};
  
  int n = sizeof(arr) / sizeof(arr[0]);

  int* p = arr;

  cout << *p << endl; // Pointing first element of an array

  cout << endl;

  for (int i = 0; i < n; i++) {
    cout << i << ": " << *(p + i) << endl;
  }

  return 0;
}