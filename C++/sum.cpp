#include <iostream>
using namespace std;

int sumOfTwoNumbers(int a, int b) {
  return a + b;
}

int main() {
  int a, b;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  int sum = sumOfTwoNumbers(a, b)
  cout << "The sum is: " << sum << endl;
  return 0;
}
