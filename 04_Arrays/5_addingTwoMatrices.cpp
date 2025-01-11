#include<bits/stdc++.h>
using namespace std; 

int main(){
  
  int arr[2][3]= {{1,2,3}, {2,4,6}};

  int arr1[2][3] = {{3,2,1}, {6,4,2}};

  int arr2[2][3];

  int n = sizeof(arr[0]) / sizeof(arr[0][0]);

  for(int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      arr2[i][j] = arr[i][j] + arr1[i][j];
    }
  }

  for (auto& row : arr2) {
    for (auto& ele : row) {
      cout << ele << " ";
    }
    cout << endl;
  }

  return 0;
}