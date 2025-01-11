#include<bits/stdc++.h>
using namespace std; 

int main(){
  
  int arr[2][3] = {{2,4,6}, {1,3,5}};

  for (auto& row : arr) {
    for (auto& ele : row) {
      cout << ele << " ";
    }
    cout << endl;
  }

  return 0;
}