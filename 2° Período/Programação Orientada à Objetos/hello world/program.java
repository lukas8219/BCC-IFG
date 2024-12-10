import java.util.Scanner;

public class program {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Insert a number: ");
        int square = Integer.valueOf(scanner.nextLine());

        square = square * square;
        System.out.println("Square of is " + square);

    }
}