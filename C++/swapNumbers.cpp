#include <iostream>
using namespace std;

void printSwappedNumbers(int a, int b) {
    cout << "Swapped value of a: " << a << endl;
    cout << "Swapped value of b: " << b << endl;
}
void swapTwoNumbers(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  printSwappedNumbers(a, b);
}

int main() {
  int a, b, temp;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << endl;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << endl;
  swapTwoNumbers(a, b);
  return 0;
}
