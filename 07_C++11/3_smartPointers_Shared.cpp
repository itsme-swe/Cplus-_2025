#include <iostream>
#include <memory>

using namespace std;

class Rectangle
{
  // 🔸 Data Members
  int length;
  int breadth;

public:
  // 🔸 Parameterized constructor
  Rectangle(int l, int b)
  {
    this->length = l;
    this->breadth = b;
  }

  // 🔸 Member Functions
  int area()
  {
    return length * breadth;
  }

  int perimeter()
  {
    return 2 * (length + breadth);
  }
};

int main()
{

  shared_ptr<Rectangle> ptr1(new Rectangle(10, 20));

  cout << "Area of ptr1 is " << ptr1->area() << endl;

  shared_ptr<Rectangle> ptr2;
  ptr2 = ptr1;

  cout << "Area of ptr2 is " << ptr2->area() << endl;

  cout << "Num. of pointers pointing to the object " << ptr1.use_count() << endl; // 2 bcoz ptr1 and ptr2 pointing to same object

  return 0;
}

/*
💥 Summary of Shared pointer
In shared pointer, multiple pointers can point to the same object, and even we can count the pointers pointing to the same object with the help of "use_count()" function.
*/