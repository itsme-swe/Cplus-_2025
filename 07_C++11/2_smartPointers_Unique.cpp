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
};

int main()
{
  // This is like creating an object 1 of class Rectangle
  unique_ptr<Rectangle> ptr(new Rectangle(10, 5));

  cout << "Area of ptr is " << ptr->area() << endl; // Area of ptr is 50

  // And, this is like creating an object 2 of class Rectangle
  unique_ptr<Rectangle> ptr2;
  ptr2 = move(ptr);

  cout << "Area of ptr2 is " << ptr2->area() << endl; // Area of ptr2 is 50

  return 0;
}

/*
💥 Summary:
unique_ptr at a time pae sirf 1 he object ko point kar sukta hai, agar same object pae new pointer ko point karvana hai toh hum use karte hai function " move() ". Joh ki automatically delete kardeta hai phele vale pointer ko.
*/