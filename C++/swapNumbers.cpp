#include <iostream>
using namespace std;

int main() {
  int a, b, temp;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << endl;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << endl;
  temp = a;
  a = b;
  b = temp;
  cout << "Swapped value of a: " << a << endl;
  cout << "Swapped value of b: " << b << endl;
  return 0;
}
