import java.util.*;
public class ChatOrder {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int n = input.nextInt();
        ArrayList<String> chats = new ArrayList<>();
        for (int i = 0 ; i < n ; i++) {
            String person = input.next();
            int contains = chats.indexOf(person);
            if (contains == -1) chats.add(person);
            else chats.add(chats.remove(contains));
        }
        while (!chats.isEmpty())
            System.out.println(chats.remove(chats.size() - 1));
    }
}
