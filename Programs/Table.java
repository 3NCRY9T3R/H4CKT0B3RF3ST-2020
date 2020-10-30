import java.util.Scanner;
public class Table {
    public static void main(String[] args) {
        int result;
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        
        for (int i=1;i<=10;i++) {
            result = N*i;
            System.out.println(N + " x " +i+ " = " + result);

        } 
    }
}
