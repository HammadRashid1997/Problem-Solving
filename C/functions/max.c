#include <stdio.h>

int Maximum(int a, int b) {
  if(a > b) {
    return a;
  }
  else {
    return b;
  }
}

int main() {
  int a = 10, b = 89;
  printf("The max is: %d", Maximum(a, b));
  return 0;
}
