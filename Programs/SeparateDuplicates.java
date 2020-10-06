// Program separates consecutive duplicate letters by a star in Java
import java.util.Scanner;
public class solution {

	// Return the updated string
	public static String addStars(String s) {
		// Write your code here
    String c="";
	if(s.length()==0 || s.length()==1)
return s;
		if(s.charAt(0)==s.charAt(1))
		{
		c=c+s.charAt(0)+"*"+addStars(s.substring(1));
		return c;
		}
		else
			c=c+s.charAt(0)+addStars(s.substring(1));
		return c;
  }	
}

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		System.out.println(solution.addStars(input));
	}
}


