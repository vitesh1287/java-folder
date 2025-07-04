import java.util.Scanner;

public class ReverseNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the number
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        int reversed = 0;

        // Reversing the number
        while (number != 0) {
            int digit = number % 10;         // Get last digit
            reversed = reversed * 10 + digit; // Add digit to reversed
            number = number / 10;             // Remove last digit
        }

        // Output the reversed number
        System.out.println("Reversed number: " + reversed);
        scanner.close();
    }
}
