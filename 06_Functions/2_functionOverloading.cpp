int add(int x, int y) {
  return x + y;
}

int add(int x, int y, int z){
  return x + y + z;
}

#include <iostream> 

using namespace std; 

int main(){

  int a = 10, b = 20, c = 30;

  int sum1 = add(a,b);

  int sum2 = add(a,b,c);

  cout << "The sum of 3 is " << sum2 << endl;


  return 0;
}