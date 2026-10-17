import java.util.HashMap;
    public class ds12{
        public static void main(String[] args){
            HashMap<String, Integer> people = new HashMap<String, Integer> ();

            people.put("vitesh",21);
            people.put("yash",27);
            people.put("varun",23);
            people.put("vishal",20);

            
                for (String i : people.keySet()) {
                System.out.println(" Name:" + i + " Age:" + people.get(i));
            }

        }

    }
