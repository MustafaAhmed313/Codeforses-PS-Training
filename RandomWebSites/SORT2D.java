import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class SORT2D {
    static Scanner input = new Scanner(System.in);
    static class Point implements Comparable<Point>{
        int x;int y;
        public Point(int x,int y){this.x = x;this.y = y;}
        @Override
        public int compareTo(Point o) {
            if (this.x > o.x || (this.x == o.x && this.y < o.y)) return 1;
            else if (this.x == o.x && this.y == o.y) return 0;
            else return -1;
        }
        @Override
        public String toString() {return this.x + " " + this.y;}
    }
    public static void main(String[] args) {
        int t = input.nextInt();
        for (int i = 0 ; i < t ; i++) {
            int n = input.nextInt();
            Point[] points = new Point[n];
            for (int j = 0; j < n; j++) {
                int x = input.nextInt();
                int y = input.nextInt();
                points[j] = new Point(x, y);
            }
            Arrays.sort(points);
            for (int j = 0; j < n; j++)
                System.out.println(points[j]);
        }
    }
}

