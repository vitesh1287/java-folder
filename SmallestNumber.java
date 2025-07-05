public class SmallestNumber {
    public static void main(String[] args) {
        int a = 25, b = 42, c = 17;

        if (a <= b && a <= c) {
            System.out.println("The smallest number is: " + a);
        } else if (b <= a && b <= c) {
            System.out.println("The smallest number is: " + b);
        } else {
            System.out.println("The smallest number is: " + c);
        }
    }
}
