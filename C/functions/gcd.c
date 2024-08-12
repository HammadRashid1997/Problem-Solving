// Code here

#include <stdio.h>

// Greatest common divisior
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    if(a == 0) {
      return b;
    }
    else {
        return gcd(b, a % b);
    }
}


// Main program
int main() {
    int A, B;
    printf("Enter the first number: ");
    scanf("%d", &A);
    printf("Enter the second number: ");
    scanf("%d", &B);
    
    printf("The GCD is: %d", gcd(A, B)); 
    return 0;
}
