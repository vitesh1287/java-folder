//Find Greatest of three Numbers
public class problem6{
    public static void main(String[] args){
        int num1=10, num2=20, num3=30;

        if(num1 >= num2 && num1 >= num3){
            System.out.println(num1 + "is big");

        }else if(num2 >=num1 && num2 >= num3){
           System.out.println(num2 + "is big");

        }else if(num3 >= num1 && num2 >= num2){
            System.out.println(num3 + "is big");
        }
           
    }
}