import java.util.Scanner;
public class factorialRecursive
{
    public static void main(String[] args) 
    {
        int n, val;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the integer:");
        n = s.nextInt();
        factorialRecursive obj = new factorialRecursive();
        val = obj.factrec(n);
        System.out.println("Factorial of "+ n + " :" + val);
    }
    int factrec(int x)
    {
        if(x > 1)
        {
            return(x * factrec(x - 1));
        }
        return 1;
    }
}
