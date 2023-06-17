import java.util.*;
public class TeamOlympiad {
    static Scanner in = new Scanner(System.in);
    public static void main(String[] args) {
        int n = in.nextInt() , one = 0 , two = 0 , three = 0;
        List<Integer> ones = new ArrayList<>();
        List<Integer> twos = new ArrayList<>();
        List<Integer> threes = new ArrayList<>();
        for (int i = 0 ; i < n ; i++) {
            int a = in.nextInt();
            if (a == 1) {
                one++;
                ones.add(i+1);
            } 
            else if (a == 2) {
                two++;
                twos.add(i+1);
            } 
            else { 
                three++;
                threes.add(i+1);
            }
        }
        int teams = Math.min(Math.min(one , two), three);//
        System.out.println(teams);//#teams
        for (int i = 0 ; i < teams ; i++) {
            System.out.println(ones.remove(0) + " " + twos.remove(0) + " " + threes.remove(0));
        }   
    }
}
