import java.util.*;
//To find the only odd occuring number in the given array - Bitwise Magic
class OnlyOddOccuring{
  public static void main(String[] args){
    Scanner s = new Scanner(System.in);
    int n = s.nextInt();//size of array
    int[] arr = new int[n];
    for(int i = 0 ; i<n; i++)
      arr[i] = s.nextInt();
    int res = 0;
    //Now this is where Bitwise XOR operator will make it super effecient
    for(int i =0; i<n; i++)
      res = res ^ arr[i];
    System.out.println(res);
  }
}
