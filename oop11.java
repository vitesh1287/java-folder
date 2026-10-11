public class oop11{
    int fage;
    String fname;

    public oop11(int age, String name){
        fage=age;
        fname=name;
    }
    
    public static void main(String[] args) {
        oop11 obj = new oop11(21, "vitesh");
        System.out.println(obj.fage+ " " +obj.fname);
        
    }
}