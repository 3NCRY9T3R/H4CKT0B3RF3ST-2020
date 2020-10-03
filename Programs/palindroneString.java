import java.util.*;
class palindroneString
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter a string");
String s1=sc.next();
String rev="";
for(int i=s1.length()-1;i>=0;i--)
{
rev+=s1.charAt(i);
}
if(s1.equals(rev))
System.out.println(s1+" is a palindrone string.");
else
System.out.println(s1+" isn't a palindrone string.");
}}
