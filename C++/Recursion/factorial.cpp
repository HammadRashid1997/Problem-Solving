#include <iostream>
using namespace std;

int factorial(int n) {
  if(n == 0 || n == 1) {
	  return n;
  }
  return n * factorial(n - 1);
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << "The factorial is: " << factorial(n) << endl;
  return 0;
}
