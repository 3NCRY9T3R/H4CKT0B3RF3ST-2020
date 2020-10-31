import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        int a=0, number, reverse=0, sumin=0, rel;
        System.out.println("Enter the Number:");
        number=sc.nextInt();
       
        for(int i=1;i<=number;i++)
        {
            if(number%i==0)
            a++;
        }
        
        if(a==2)
        {
            reverse = number;
        }
        
        while(reverse > 0)
        {
            rel = reverse%10;
            sumin = sumin*10+rel;
            reverse = reverse/10;
        }
       
        if(number == sumin)
        System.out.println("Prime Palindrome");
        else
        System.out.println("Not a Prime Palindrome");
    }
}
