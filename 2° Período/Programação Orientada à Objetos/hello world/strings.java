import java.util.Scanner;

public class strings {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("I will tell you a store, but I need some informantion first");

        System.out.println("What is the main character called?");
        String name = scanner.nextLine();

        System.out.println("What is their job?");
        String job = scanner.nextLine();

        System.out.println("Here is the story: ");
        System.out.println("Once upon a time there was " + name + ", who was a " + job + ".");
        System.out.println("On te way to work, " + name + " reflected on life.");
        System.out.println("Perhaps " + name + " will not be a " + job + " forever.");
    }

}