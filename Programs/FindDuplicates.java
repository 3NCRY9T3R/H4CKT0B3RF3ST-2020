// finding duplicates in an array with time complexity of O(logn).
// method used : Tortoise and Hare method.


import java.util.Scanner;
public class Ques1 {
	 static int findDuplicate(int[] nums) {
	        int slow =nums[0];
	        int fast =nums[0];
	        do{
	            slow =nums[slow];
	            fast =nums[nums[fast]];
	            
	        } while (slow!=fast);
	        fast = nums[0];
	        while(slow!=fast){
	            slow=nums[slow];
	            fast= nums[fast];
	        }
	        return slow;
	    }
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int [n];
		for(int i=0;i<n;i++) {
			a[i]= sc.nextInt();
		}
		System.out.println(findDuplicate(a));
				}

}
