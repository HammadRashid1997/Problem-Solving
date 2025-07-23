#include <stdio.h>
int main() {
  int a, b;
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);
  int div = a / b;
  printf("Dividend is: %d", &div);
  return 0;
}
