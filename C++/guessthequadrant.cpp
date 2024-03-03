#include <iostream>
using namespace std;

void GuesstheQuad(int x, int y) {
  if(x > 0 && y > 0) {
    cout << "First quad.\n";
  }
  else if(x < 0 && y > 0) {
    cout << "Second quad.\n";
  }
  else if(x < 0 && y < 0) {
    cout << "Third quad.\n";
  }
  else if(x > 0 && y < 0) {
    cout << "Fourth quad.\n";
  }
}

// Main driver
int main() {
  int x, y;
  cout << "Enter x: ";
  cin >> x;
  cout << "Enter y: ";
  cin >> y;
  GuesstheQuad(x, y);
    
  
  return 0; 
}
