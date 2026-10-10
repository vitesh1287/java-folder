//Access Methods With an Object
public class oop8{
    public void Lion(){
        System.out.println("the lion is running");
    }
    public void speed(int maxspeed){
        System.out.println("the max speed is :" + maxspeed);
    }

    public static void main(String[] args){
        oop8 obj = new oop8();
        obj.Lion();
        obj.speed(200);
    }
}

