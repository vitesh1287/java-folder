import java.util.ArrayList;
public class ds4{
    public static void main(String[] args){
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("bmw");
        cars.add("volvo");
        cars.add("ford");
        cars.add("odi");
        cars.add("tata");
        for(int i=0; i<= cars.size(); i++){
            System.out.println(cars.get(i));
        }

    }
}