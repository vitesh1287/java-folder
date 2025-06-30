public class Show{
    String name;
    int age;
    void SetNameAge(String n, int a){
        name = n;
        age = a;
    }
    void display(){
        System.out.println(name+" "+age);
    }
    public static void main(String[]args){
        Show d = new Show();
        d.SetNameAge("rose",24);
        d.display();
    }

}

