
#include <iostream> 

using namespace std; 

template <class T>
T maxi (T x, T y) {
  
  if (x > y) {
    return x;
  }
  else {
    return y;
  }

}

int main(){

  int a = 10, b = 5;

  float x = 2.5f, y = 1.5f;

  cout << maxi(a,b) << endl;

  cout << maxi(x,y);


  return 0;
}