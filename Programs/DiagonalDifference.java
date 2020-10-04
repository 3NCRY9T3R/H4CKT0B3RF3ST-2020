// program to enter the elements of a square matrix of order n. Then compute and print the diagonal difference of matrix diagonal elements
import java.util.*;
class DiagonalDifference
{
public static void main(String args[])
{int sum1=0,sum2=0;
Scanner sc=new Scanner(System.in);
System.out.println("Enter order of matrix");
int n=sc.nextInt();
System.out.println("Enter elements of matrix");
int a[][]=new int[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
a[i][j]=sc.nextInt();
if(i==j)
sum1+=a[i][j];
if(i+j==n-1)
sum2+=a[i][j];
}}
System.out.println("Diagonal difference is "+Math.abs(sum1-sum2));
}}
