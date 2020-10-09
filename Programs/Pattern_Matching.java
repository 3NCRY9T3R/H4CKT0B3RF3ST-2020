import java.io.*;
import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		String pattern = scn.next();
		HashMap<Character,String> map = new HashMap<>();
		solution(str,pattern,map,pattern);
	}

	public static void solution(String str, String pattern, HashMap<Character,String> map, String op){
		if(pattern.length() == 0){
			if(str.length() == 0){
				boolean[] arr = new boolean[26];
				for(int i = 0 ; i < op.length(); i++) {
					char ch = op.charAt(i);
					if(arr[ch - 'a'] == false) {
						arr[ch - 'a'] = true;
						System.out.print(ch + " -> " + map.get(ch) + ", ");
					}
				}
				System.out.println(".");
			}
			return;
		}

		char chp = pattern.charAt(0);
		String rop = pattern.substring(1);
		
		if(!map.containsKey(chp)){
			//if character is coming for the first time
			for(int i = 0 ; i < str.length(); i++){
				String fh = str.substring(0, i + 1);
				String ros = str.substring(i + 1);

				map.put(chp, fh);
				solution(ros,rop,map,op);
				map.remove(chp);
			}
		}else{
			//if character has already appeared 
			String prevmatching = map.get(chp);
			String nextsubstring = str.length() >= prevmatching.length() ? str.substring(0, prevmatching.length()) : "-1";
			if(prevmatching.equals(nextsubstring)){
				String ros = str.substring(prevmatching.length());
				solution(ros, rop, map,op);
			}
		}
	}

}


                        
