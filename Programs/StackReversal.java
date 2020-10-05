// Implementing Stack Reversal
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Runner {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static Stack<Integer> takeInput() throws NumberFormatException, IOException {
    	int size = Integer.parseInt(br.readLine().trim());
    	Stack<Integer> input = new Stack<>();

    	if (size == 0) {
    		return input;
    	}
    	
    	String[] values = br.readLine().trim().split(" ");

    	for(int i = 0; i < size; i++) {
    		input.push(Integer.parseInt(values[i]));
    	}

    	return input;
    }

    public static void main(String[] args) throws NumberFormatException, IOException {
    	Stack<Integer> input = takeInput();
    	Stack<Integer> empty = new Stack<>();

    	Solution.reverseStack(input, empty);

    	while(!input.isEmpty()) {
    		System.out.print(input.pop() + " ");
    	}

    }
}
 import java.util.Stack;
public class Solution {
   

	public static boolean checkBalanced(String exp) {
		// Write your code here
        Stack<Character> t=new Stack<Character>();
        for(int i=0;i<exp.length();i++){
            if(exp.charAt(i)=='{'||exp.charAt(i)=='('||exp.charAt(i)=='['){
                t.push(exp.charAt(i));
    	}
        if(exp.charAt(i)=='}'||exp.charAt(i)==')'||exp.charAt(i)==']') {
        	if(t.isEmpty()) {
        		return false;
        	}
        	else if (!isMatching(t.pop(),exp.charAt(i))) {
        		return false;        		
        	}
        	
        }
    }
    if(t.isEmpty()) {
    	return true;
    }
    else {
    	return false;
    }
    	
	}
	public static boolean isMatching(char c1,char c2) {
		if(c1=='('&&c2==')') {
			return true;
		}
		else if (c1=='{'&&c2=='}') {
			return true;
		}
		else if(c1=='['&&c2==']') {
			return true;
		}
		else return false;


	}
            }
        
	

