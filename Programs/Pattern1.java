import java.util.Scanner;
public class Pattern1
{
	public static void main(String[] args) {
		System.out.println("Enter the no. of rows: ");
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int i,j;
		for (i =0; i <= n; i++) {
		    for (j=0; j <= i; j++) {
		        System.out.print("*");
		    }   System.out.println();
		}
	}
}
