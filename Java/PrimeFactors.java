import java.util.Scanner;       // scanner class to take input from the user

// PrimeFactors class
public class PrimeFactors {
// main function
    public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      System.out.print("Enter a number: "); // user enters a number
      int number = scanner.nextInt();
      System.out.print("Prime factors of " + number + " are: ");
      
      // a loop to run for the prime numbers
      for (int i = 2; i <= number; i++) {
         while (number % i == 0) {  // check if number % i == 0
            System.out.print(i + " ");
            number = number / i;    // divides number with i and stores the result in number
         }
      }
   }
}   // end of the class
