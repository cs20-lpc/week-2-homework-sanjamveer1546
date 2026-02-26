#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box
{
private:
  T value;

public:
  // Constructor
  Box(T v) : value(v) {}

  // setValue
  void setValue(T v) { value = v; }

  // getValue
  T getValue() const { return value; }

  // print
  void print() const { cout << value << endl; }
};

int main()
{
  Box<int> intBox(10);
  Box<double> doubleBox(3.14);
  Box<string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
}
