import java.util.*;
public class solution {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int n = input.nextInt();
        String s = input.next();
        Map<String , Integer> m = new HashMap<>();  
        for (int i = 0 ; i < s.length() - 1 ; i++) 
            m.put(s.substring(i, i+2), null);
    }
}
 