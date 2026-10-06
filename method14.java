//Countdown with Recursion
public class method14 {
    
    static void countdown(int n) {
      if (n > 0) {
        System.out.print(n + " ");
        countdown(n - 1);
      }
    }
  
    public static void main(String[] args) {
      countdown(5);
    }
  }
  
