import java.util.Scanner;

public class helloWorld {
    public static void main(String[] args) {
        //create a tool for reading user input and name it scanner 
        Scanner scanner = new Scanner(System.in);

        System.out.println("What's your name?");

        // use the scanner tool to read the string written by the user in the nextLine() method
        // and assing it to the string variable 
        String name = scanner.nextLine();
        System.out.println("Hello, " + name);
    }
}