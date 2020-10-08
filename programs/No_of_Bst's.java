import java.io.*;
import java.util.*;

public class Main {

   public static void main(String[] args) throws Exception {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      int n = Integer.parseInt(br.readLine());
      long[] dp = new long[n + 1];
      dp[0] = 1;

      for(int i = 1; i < dp.length; i++){
         for(int j = 0; j < i; j++){
            dp[i] += dp[j] * dp[i - 1 - j];
         }
      }

      System.out.println(dp[n]);
   }

}


                        
