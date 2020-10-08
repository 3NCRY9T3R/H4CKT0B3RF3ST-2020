package com.faizan.CodeChef;

import java.util.Scanner;

public class EqualSweetness {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 0;
        int tc = sc.nextInt();
        for (t = 0; t < tc; t++)
        {
            int n=sc.nextInt();
            int m=sc.nextInt();
            int x=sc.nextInt();
            int y=sc.nextInt();
            String ans=findSweetness(n,m,x,y);
            System.out.println(ans);

        }
    }

    private static String findSweetness(int n, int m, int x, int y)
    {
        int total=n*x+m*y;
        int h=total/2;
        if(total%2==0)
        {
            for(int i=0;i<=n;i++){
                for(int j=0;j<=m;j++){
                    if((i*x+j*y)==h){
                        return "YES";
                    }
                }
            }

        }
        else{
        return "NO";
         }
        return "NO";
    }
}