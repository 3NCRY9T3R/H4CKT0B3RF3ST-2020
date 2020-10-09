import java.util.Scanner;
public class Solution {


	public static void main(String[] args) {

		
Scanner s=new Scanner(System.in);
		int n=s.nextInt();
      int sum=0;
		for(int i=0;i<=n;i+=2)
          sum=sum+i;
		System.out.println(sum);

	}

}
