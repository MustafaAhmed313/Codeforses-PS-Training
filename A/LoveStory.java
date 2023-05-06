import java.util.Scanner;
public class LoveStory {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        String o = "codeforces";
        int t = input.nextInt();
        for (int i = 0 ; i < t ; i++) {
            String s = input.next();
            int count = 0;
            for (int j = 0; j < 10; j++)
                if (o.charAt(j) != s.charAt(j)) count++;
            System.out.println(count);
        }
    }
}
