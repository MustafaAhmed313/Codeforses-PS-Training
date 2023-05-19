import java.util.*;
public class solution {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int t = input.nextInt();
        for (int i = 0 ; i < t ; i++) {
            int n = input.nextInt();
            int k = 2;
            while (k < 29) {
                if(n % (((int)Math.pow(2 , k)) - 1) == 0) break;
                k++;
            }
            System.out.println(n / (((int)Math.pow(2 , k)) - 1));
        }   
    }
} 