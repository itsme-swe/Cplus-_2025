#include<bits/stdc++.h>
using namespace std; 

int main(){
  
  array<int, 5> arr = {20, 15, 30, 2, 10};

  int n = arr.size();

  int target = 30;

  for (int i=0; i < n; i++) {
    if (arr[i] == target) {
      cout << i << endl;

      return 0;
    }
  }

  cout << "Key not found";



  return 0;
}