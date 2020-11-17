import java.util.*;
// To check whether a number is power of two or not using - Bitwise magic - [Informatica Interview 2020]
class IsPowerOfTwo{
  public static void main(String[] args){
    Scanner s = new Scanner(System.in);
    int n = s.nextInt();
    
    // Let's see the power of Bitwise AND
    
    if((n!=0) && (n!=1) && (n & (n-1) == 0))
      System.out.println("It's a power of 2");
    else
      System.out.println("It's not a power of 2");
  }
}
