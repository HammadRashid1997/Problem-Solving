#include <iostream>
using namespace std;

int productOfTwoNumbers(int a, int b) {
  return a * b;
}

int main() {
  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "Product is: " << productOfTwoNumbers(a, b) << endl;
  return 0;
}
    
