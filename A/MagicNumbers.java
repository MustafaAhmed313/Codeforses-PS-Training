import java.util.*;
public class MagicNumbers {
    static Scanner in = new Scanner(System.in);
    public static void main(String[] args) {
        String number = in.next();
        int i = 0; // 4
        boolean flag = false;
        while (i < number.length()) { //114114
            if (i+2 < number.length() && number.substring(i, i+3).equals("144")) i += 3;
            else if (i+1 < number.length() && number.substring(i, i+2).equals("14")) i +=2;
            else if (i+0 < number.length() && number.substring(i , i+1).equals("1")) i++;
            else {
                flag = true;
                break;
            } 
        }
        if (!flag) System.out.println("YES");
        else System.out.println("NO");
    }
}
