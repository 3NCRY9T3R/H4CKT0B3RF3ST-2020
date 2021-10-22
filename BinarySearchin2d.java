// 1. You are given a number n, representing the number of rows and columns of a square matrix.
// 2. You are given n * n numbers, representing elements of 2d array a. 
// Note - Each row and column is sorted in increasing order.
// 3. You are given a number x.
// 4. You are required to find x in the matrix and print it's location int (row, col) format as discussed in output format below.
// 5. In case element is not found, print "Not Found".
  
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int[][] arr = new int[n][n];
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < arr[0].length; j++){
                arr[i][j] = scn.nextInt();
            }
        }

        int x = scn.nextInt();

        int i = 0;
        int j = arr[0].length - 1;
        while(i < arr.length && j >= 0){
            if(x > arr[i][j]){
                i++;
            } else if(x < arr[i][j]){
                j--;
            } else {
                System.out.println(i);
                System.out.println(j);
                return;
            }
        }

        System.out.println("Not Found");
    }

}
