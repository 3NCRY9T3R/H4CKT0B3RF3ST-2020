// solution of codeforces round 671(div 2) Problem c
//problem name: Killjoy
//problem link :https://codeforces.com/contest/1419/problem/C

// solution

import java.util.*;
public class Killijoy {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0) {
    	int n = sc.nextInt();
    	int x = sc.nextInt();
    	int cout =0;
    	int sum=0;
    	for(int i=0;i<n;i++) {
    		int rating = sc.nextInt();
    		if(rating==x){
    		    cout++;
    		}
    		sum=sum+rating;
    	}
    	if (cout == n) {
          System.out.println(0);
        } else if (cout > 0) {
           System.out.println(1);
        } else if (sum == n * x) {
            System.out.println(1);
        } else {
            System.out.println(2);
        }
    	
    }
	}
 
}
