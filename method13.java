// Calculate Factorial with Recursion
public class method13{
    public static int factorial (int n){
        if(n>1){
            return n*factorial(n-1);
        }else{
            return 1;
        }

    }
    public static void main(String[] args) {
        System.out.println("the factorial 5 is "  + factorial(5));
    }

}