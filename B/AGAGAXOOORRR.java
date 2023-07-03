import java.util.*;

public class AGAGAXOOORRR {
    static Scanner in = new Scanner(System.in);
    public static void main(String[] args) {
        long t = in.nextInt();
        while (t != 0) {
            t--;
            long n = in.nextInt();
            List<Long> l = new ArrayList<>();
            for (long i = 0 ; i < n ; i++) l.add(in.nextLong());
            while (l.size() > 1) {
                l.set(1 , (l.get(0) ^ l.get(1)));
            }
            System.out.println(l.get(0) == 0 ? "YES" : "NO");
        }
    }
}