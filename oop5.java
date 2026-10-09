public class oop5 {
    int x = 5;
  
    public static void main(String[] args) {
      oop5 myObj1 = new oop5();  // Object 1
      oop5 myObj2 = new oop5 ();  // Object 2
      myObj2.x = 25;
      System.out.println(myObj1.x);  // Outputs 5
      System.out.println(myObj2.x);  // Outputs 25
    }
  }
  
  