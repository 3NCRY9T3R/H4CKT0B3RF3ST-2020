import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Character:");
        char ch = sc.next().charAt(0);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
            System.out.println(ch + " is vowel");
        else
            System.out.println(ch + " is consonant");
    }
}
