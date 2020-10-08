import java.io.*;
import java.util.*;

public class Main {

    public static int solution(int[] prices){
        int[] dp = new int[prices.length + 1];
        for(int i = 1; i < dp.length; i++){
            int max = Integer.MIN_VALUE;
            for(int j = 0; j < i; j++){
                max = Math.max(max, dp[i - j - 1] + prices[j]);
            }
            dp[i] = max;
        }
        return dp[dp.length - 1];
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] prices = new int[n];
        for(int i = 0 ; i < n ; i++){
            prices[i] = scn.nextInt();
        }
        System.out.println(solution(prices));
    }

}


                        
