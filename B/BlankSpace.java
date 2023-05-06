import java.util.Scanner;
public class BlankSpace {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int t = input.nextInt();
        for (int i = 0 ; i < t ; i++) { //stack[100010001]
            int n = input.nextInt();
            int[]a = new int[n];
            int max = 0 , count = 0;
            for (int j = 0 ; j < n ; j++) { //0
                a[j] = input.nextInt();
                if (a[j] == 0) count++; //j = 8 | count = 3
                else  {
                    max = Math.max(max , count);
                    count = 0;
                }
            }
            System.out.println(Math.max(max , count));
        }
    }
}
