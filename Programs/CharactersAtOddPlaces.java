// Input a string but print characters only at the odd places
import java.util.*;
class Sol
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter a string");
String s=sc.next();
String s1="";
for(int i=0;i<=s.length()-1;i=i+2)
{
char c=s.charAt(i);
s1+=c;
}
System.out.println("Formatted string is "+s1);
}}
