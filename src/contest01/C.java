package contest01;
import java.util.Scanner;

/**
 * Created by WebTuring on 2017-6-29.
 */
public class C {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        for (String word : cin.nextLine().split("\\W+"))
            System.out.println(word);
        cin.close();
    }
}
