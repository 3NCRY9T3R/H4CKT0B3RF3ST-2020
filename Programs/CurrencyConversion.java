import java.util.*;
import java.text.*;
import java.util.regex.*;
class CurrencyConversion
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        double payment=sc.nextDouble();
        String us=NumberFormat.getCurrencyInstance(Locale.US).format(payment);
        String india=NumberFormat.getCurrencyInstance(new Locale("en","in")).format(payment);
        String china=NumberFormat.getCurrencyInstance(Locale.CHINA).format(payment);
        String france=NumberFormat.getCurrencyInstance(Locale.FRANCE).format(payment);
        System.out.println("US: "+ us);
        System.out.println("India: "+ india);
        System.out.println("China: "+ china);
        System.out.println("France: "+ france);
    }}
