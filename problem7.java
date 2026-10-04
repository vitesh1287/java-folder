//Leap year or not
public class problem7{
    public static void main(String[] args) {
        int year = 2026;

        if(year % 400==0)
            System.out.println(year + " this is leap year");


        else if(year % 4==0 && year % 100 !=0)
            System.out.println(year + " this is leap year");

       else
        System.out.println(year + " this is not leap year");
    }
}