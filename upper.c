import java.io.*;
import java.util.Scanner;
public class upper
{
    public static void main(String[] input)
    {
        String a, b;
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Lowercase : ");
        a = scan.nextLine();
        
        b = a.toUpperCase();
        System.out.print(" Uppercase : " +b);
    }
}
