import java.util.LinkedList;
    public class ds8{
        public static void main(String[] args){
            LinkedList<String> cars = new LinkedList<String>();
            cars.add("volvo");
            cars.add("swift");
            cars.add("bmw");
            cars.add("ford");
            cars.removeFirst();
            System.out.println(cars);

        }
    }
