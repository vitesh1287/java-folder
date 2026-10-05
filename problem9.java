//Reverse a given number in Java
public class problem9{
    public static void main(String[] args){
        int num = 12345, reverse=0, rev;

        while(num!=0){
            rev = num%10;
            reverse = reverse * 10 + rev;
            num/=10;
        }
        System.out.println("the reverse no is" + reverse);
    }
}