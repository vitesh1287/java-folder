public class loop{
    public static void main(String[] args) {
        int[][] numbers ={{1,2,3}, {6,7,8,9,4}};
        for(int[] row : numbers){
            for(int num : row){
                System.out.println(num);
            }
        }
        
    }
}