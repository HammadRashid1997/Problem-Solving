#include <iostream>
using namespace std;

int differenceOfTwoNumbers(int a, int b) {
  return a - b;
}

int main() {
  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "The difference is: " << differenceOfTwoNumbers(a, b) << endl;
  return 0;
}
