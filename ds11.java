import java.util.HashSet;
public class ds11{
    public static void main(String[] args) {
        HashSet<Integer> numbers = new HashSet<Integer>();
        
        numbers.add(4);
        numbers.add(6);
        numbers.add(8);
        for(int i=1; i<=10; i++){

            if(numbers.contains(i)) {

                System.out.println(i + "found");
            }else{
                System.out.println(i + "not found");

            }
        }
    }
}