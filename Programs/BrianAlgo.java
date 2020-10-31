import java.util.*; 
// Function to get no of set bits in binary representationof positive integer n  [DXC Technology-2020]
class BrianAlgo { 
    public static void main(String args[]) 
    { 
        Scanner s = new Scanner(System.in);
        int i = s.nextInt(); 
        System.out.println(countSetBits(i)); 
    }
    //Brian's Algorithm
    static int countSetBits(int n) 
    { 
        int res = 0; 
        while (n > 0) { 
            n = (n & (n-1));
            res++;
        } 
        return res; 
    }   
}    
