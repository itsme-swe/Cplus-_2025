#include <iostream> 

using namespace std; 

int main(){

  string str = "HelloWorld";

  string::iterator it;

  for (it=str.begin(); it != str.end(); it++) {
    cout << *it << " ";
  }

  return 0;
}

// o/p: H e l l o W o r l d 