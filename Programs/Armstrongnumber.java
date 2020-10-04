// Implementation to check wether a number is Armstrong or not.
//An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.
//For example, 153 is an Armstrong number since 1*1*1 + 5*5*5 + 3*3*3 = 153.

import java.util.Scanner;
public class ArmstrongNumber {

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();    // take the number
        int temp = a;      // store it in a temp variable so that it dont affect original number
        int l =0;         
        while(temp!=0) {     // in this we check the no of digits in the input number for eg 101 has 3 digits
        	temp =temp/10;
        	l++;
        }
        int temp2 =a;              
        int x;
        int sum =0;
        while(temp2!=0) {              // in this while loop the implementation of armstrong is done 
        	x = temp2%10;
        	int y =1;
        	for(int i=1;i<=l;i++)
        	{
        		y =y*x;
        	}
        	
        	sum = sum+y;
        	temp2 = temp2/10;
        } 
        if(a==sum) {       // here the program checks wether the obtained number is Equal to original no or not
        	System.out.println("It is a Armstrong number");
        }else {
        	System.out.println("Not a ArmStrong Number");
        }
	}

}
