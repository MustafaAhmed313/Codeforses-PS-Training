import java.util.Scanner;
public class GoldRash {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int t = input.nextInt();
        for (int i = 0 ; i < t ; i++) {
            int a = input.nextInt() , b = input.nextInt();
            if (solve(a , b)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
    public static boolean solve(int n , int val) {
        if (n == val) return true;
        if (n % 3 != 0) return false;
        return solve(n/3 , val) || solve(n/3 * 2 , val);
    }
}
