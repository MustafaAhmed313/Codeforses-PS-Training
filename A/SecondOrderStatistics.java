import java.util.Arrays;
import java.util.Scanner;
public class SecondOrderStatistics {
    static Scanner in = new Scanner(System.in);
    public static void main(String[] args) {
        int n = in.nextInt();
        int[] input = new int[n];
        for (int i = 0 ; i < input.length ; i++) input[i] = in.nextInt();
        Arrays.sort(input);
        boolean flag = false;
        int i;
        for (i = 1 ; i < n ; i++) {
            if (input[i] > input[0]) {
                flag = true;
                break;
            }
        }
        if (!flag) System.out.println("NO");
        else System.out.println(input[i]);
    }
}
