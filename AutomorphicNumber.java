import java.util.*;
public class Automorphic{
   public static void main(string[] args)
   {
      int num,p=0,d=10;
      Scanner sc=new Scanner(System.in);
      System.out.print("Enter a no:");
      num=sc.nextInt();
      int k=num*num;
      while(p<num)
      {
         p=k%d;
         d*=10;
      }
       if(p==num)
       {
           System.out.println(num +"is a Automorphic number");
       else{
           System.out.println(num +"is not a Automorphic Number");
        }
      }
   }
