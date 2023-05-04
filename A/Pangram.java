import java.util.*;
public class Pangram {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int n = input.nextInt();
        String s = input.next();
        if (n < 26) {
            System.out.println("NO");
            System.exit(0);
        }
        s = s.toLowerCase();
        ArrayList<Character> list = new ArrayList<>();
        for (int i = 0 ; i < n ; i++)
            if (!list.contains(s.charAt(i))) list.add(s.charAt(i));
        if (list.size() != 26) System.out.println("NO");
        else System.out.println("YES");
    }
}
