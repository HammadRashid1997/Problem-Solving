#include <stdio.h>

int factorial(int n) {
  if(n == 0 || n == 1) {
    return n;
  }
  return n * factorial(n - 1);
}

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Factorial is: %d", factorial(n));
  return 0;
}
