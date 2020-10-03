// Enter an array of 5 elements. Print the Maximum and Minimum sum using only 4 elements
import java.util.*;
import java.util.Arrays;
class MinMaxsum
{
public static void main(String args[])
{
int minsum=0,maxsum=0;
Scanner sc=new Scanner(System.in);
int n=5;
int ar[]=new int[5];
System.out.println("Enter 5 elements");
for(int i=0;i<5;i++)
{
ar[i]=sc.nextInt();
}
ar=ar.Sort();
for(int i=0;i<4;i++)
{
minsum+=ar[i];
}
for(int i=1;i<5;i++)
{
maxsum+=ar[i];
}
System.ou.println("Maximum sum : "+maxsum);
System.ou.println("Minimum sum : "+minsum);
}}

