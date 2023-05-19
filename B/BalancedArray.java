import java.util.*;
public class BalancedArray {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int t = input.nextInt();
        for (int i = 0; i < t; i++) {
            int n = input.nextInt();
            if (n % 4 != 0) {
                System.out.println("NO");
                continue;
            }
            System.out.println("YES");
            for (int j = 2; j <= n; j += 2) {
                System.out.print(j + " ");
            }
            int j;
            for (j = 1; j < n - 1; j += 2) {
                System.out.print(j + " ");
            }
            System.out.println(j + n / 2);
        }
    }
}

