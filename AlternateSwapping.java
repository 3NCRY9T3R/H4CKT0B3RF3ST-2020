// This program alternatively swaps numbers in the array like for the array : 1 2 3 4 the output will be 2 1 4 3

import java.util.Scanner;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Runner {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
    public static int[] takeInput() throws IOException {
        int size = Integer.parseInt(br.readLine().trim());
        int[] input = new int[size];

        if (size == 0) {
            return input;
        }
        
        String[] strNums; 
        strNums = br.readLine().split("\\s");
        

        for (int i = 0; i < size; ++i) {
            input[i] = Integer.parseInt(strNums[i]);
        }

        return input;
    }

    public static void printArray(int[] arr) {
        for (int element : arr) {
            System.out.print(element + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) throws NumberFormatException, IOException {
        int t = Integer.parseInt(br.readLine().trim());

        while(t > 0) {

            int[] input = takeInput();
            Function.swapAlternate(input);
            printArray(input);

            t -= 1;
        }
    }
}
public class Function {

	
	public static void swapAlternate(int[] input){
	
      int N = input.length; 
      int temp=0;
      if(N%2==0){
      for(int i=0;i<N-1;i+=2){
        temp=input[i];
        input[i]=input[i+1];
        input[i+1]=temp;
      }
        
      }
      else{
        for(int i=0;i<N-1;i+=2){
          temp=input[i];
          input[i]=input[i+1];
          input[i+1]=temp;
        } 
        input[N-1]=input[N-1];
      }
        
	}
	
}
