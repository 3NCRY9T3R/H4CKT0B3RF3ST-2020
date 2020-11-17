import java.util.*;
//Asked in NQT 2020
class FirstNonRepeating {  
    static char count[] = new char[256]; // COUNT ARRAY
    public static void main(String[] args) 
    { 
        Scanner s = new Scanner(System.in);
        String str = s.nextLine(); 
        for (int i = 0; i < str.length(); i++) 
            count[str.charAt(i)]++; 
        int index = NonRepeating(str); 
  
        System.out.println(index == -1 ? "Either all characters are repeating or the string is empty": str.charAt(index)); 
    }
    static int NonRepeating(String str) 
    {
        int index = -1; 
        for (int i = 0; i < str.length(); i++) { 
            if (count[str.charAt(i)] == 1) { 
                index = i; 
                break; 
            } 
        } 
        return index; 
    }
} 
