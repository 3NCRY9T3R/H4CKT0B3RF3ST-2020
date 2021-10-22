// An urn contains 8 balls : 4 red , 2 blue and 2 green. Now n balls are drawn out of the urn. 
// Calculate the probability that out of n drawn balls exactly x balls are red.

import java.util.Scanner;

public class main {
  public static void main (String[] args) {
    
    Scanner scn = new Scanner(System.in);

    int n = scn.nextInt();
    int x = scn.nextInt();
    scn.close();

    double num = nCr(4, x) * nCr(4, n-x);        // numerator   : choosing x balls from 4 red balls * choosing remaining balls n-x from 2 + 2 other balls 
    double den = nCr(8, n);                      // denominator : all possible ways to choose n balls from 8 balls

    int ans = (int)((num / den)*100);
    System.out.print(ans);

  }

  public static double nCr(int n, int r){       // this will be combination nCr
    
    double x = fo(n) / ( fo(r) * fo(n-r) ) ;
    return x;
  }

  public static int fo(int n){                  // this will be the factorial
    
    int f = 1;
    for(int i = 1; i <=n; i++) f = f*i;
    return f;
  }
}
