#include <iostream> 

using namespace std; 

int add(int x, int y) {
  int z;
  z = x + y;
  return z;
}

int main(){

  int a = 20;
  int b = 30;

  int sum = add(a,b);

  cout << "The sum of a and b is " << sum << "\n";


  return 0;
}