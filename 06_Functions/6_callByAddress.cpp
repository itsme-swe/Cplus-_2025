// In this we'll try to swap the numbers using call by address mechanism

#include <iostream>

using namespace std;

void swap(int *a, int *b)
{

  // Dereferencing the pointers
  int temp = *a;

  *a = *b;

  *b = temp;
}

int main()
{

  int a = 10;
  int b = 20;

  swap(&a, &b);

  cout << "a:" << a << "\n"
       << "b:" << b;

  return 0;
}

/*
Conclusion : call by address mechanism sae hum swap isliye kar paye kyuki humnae actual parameters mae value nhi unka address pass kiya formal paramters ko aur address ko hold karne kae liye hum hamesha pointer variable use karte hai. Isliye formal parameters mae humnae pointer variable as paramter pass kiye hai.

*/