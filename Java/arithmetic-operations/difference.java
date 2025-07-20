import java.util.Scanner;
public class SubtractTwoNumbers {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int num1 = input.nextInt();
        
        System.out.print("Enter the second number: ");
        int num2 = input.nextInt();
        
        int difference = num1 - num2;
        System.out.println("The difference of " + num1 + " and " + num2 + " is " + difference + ".");
    }
}
