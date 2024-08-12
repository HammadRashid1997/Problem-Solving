#include <stdio.h>

int Minimum(int a, int b) {
  if(a < b) {
    return a;
  }
  else {
    return b;
  }
}

int main() {
  int a = 10, b = 89;
  printf("The min is: %d", Minimum(a, b));
  return 0;
}
