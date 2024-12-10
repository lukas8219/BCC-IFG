import java.util.Scanner;

public class math {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("How many days would you like to convert to seconds?");
        int seconds = Integer.valueOf(scanner.nextLine());

        seconds = seconds * 60 * 60 * 24;
        System.out.println(seconds/(3600 * 24) + " days has " + seconds + "s");

        int one = 3;
        int two = 2;

        boolean greater = two > one;
        if (greater)
        {
            System.out.println("awawawawa");
        } else {
            System.out.println("no wawawawa");
        }

        String hola = "hola";
        String hola2 = "holA";

        if (hola.equals(hola2))
        {
            System.out.println("hola hola");
        }
    }
}