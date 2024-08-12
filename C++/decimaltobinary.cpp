#include <iostream>
using namespace std;


int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  
  int binnum[32];
  int i = 0;
  while(n > 0) {
    binnum[i] = n % 2;
    n = n / 2;
    i++;
  }
  
  cout << "Binary number is: ";
  for(int j = i - 1; j >= 0; j--) {
    cout << binnum[j];
  }
  
  return 0;
}
