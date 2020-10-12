import java.util.Scanner;
public class Solution {


	public static void main(String[] args) {
		Scanner s=new Scanner (System.in);
		int S=s.nextInt();
		int E=s.nextInt();
		int W=s.nextInt();
		int F=S;
		int C;
		while(F<=E)
		{ 
			C=(5*(F-32))/9;
			System.out.println(F +   "   \t   "   + C);
			F=F+W;
		}


	}

}
