//java recursion
public class method11{
    public static int sum (int A){
        if(A>0){
            return A+sum (A-1);
        }
        return 0;
    }
    public static void main(String[] args) {
        int result = sum(10);
        System.out.println(result);
        
    }
}