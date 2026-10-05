public class method9{
    static int Mymethodint(int x, int y){
        return x+y;
    }
    static double Mymethoddouble(double x, double y){
        return x+y;
    } 

    public static void main(String[] args){
        int num1 = Mymethodint (7,6);
        double num2 = Mymethoddouble (5.6,6.5);
        System.out.println("int: " + num1);
         System.out.println("double: " + num2);
    }
}