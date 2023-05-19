import java.util.*;
public class Candies {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int t = input.nextInt();
        for (int i = 0 ; i < t ; i++) {
            int n = input.nextInt();
            int k = 2;
            while (true) {
                if(n % (((int)Math.pow(2 , k)) - 1) == 0) {
                    System.out.println(n / (((int)Math.pow(2 , k)) - 1));
                    break;
                }
                k++;
            }
        }
    }
}
