import java.util.Scanner;

public class dataTypes {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String str = scanner.nextLine();
        System.out.println("String: " + str);

        // we need to make the conversion, 'cause input is always read as strings
        int intValue = Integer.valueOf(scanner.nextLine());
        System.out.println("Integer value: " + intValue);

        // to convert to any numerical datatype, we just need to use the right valueOf method 
        double doubleValue = Double.valueOf((scanner.nextLine()));
        System.out.println("Double value: " + doubleValue);

        float floatValue = Float.valueOf(scanner.nextLine());
        System.out.println("Float value: " + floatValue);

        // the Boolean.valueOf method is not case sensitive 
        // also, any string different from true is read as false
        boolean booleanValue = Boolean.valueOf(scanner.nextLine());
        System.out.println("Boolean value: " + booleanValue);
    }
}