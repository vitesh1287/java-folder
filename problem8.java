//wap Sum of digits of a Number in Java
public class problem8{
    public static void main(String[] args) {
        int num = 12345, sum = 0;
        while(num!=0){
            sum+=num%10;
            num=num/10;
        }
        System.out.println("sum of digits:"  + sum);
        
    }
}