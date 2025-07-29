#include <iostream>
using namespace std;

int Sum(int n) {
  int sum = n;
  if(n == 0 || n == 1) {
    return n;
  }
  else {
    return sum + Sum(n - 1);
  }
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << "The sum uptil number " << n << " is: " << Sum(n) << endl;
  return 0; 
}
