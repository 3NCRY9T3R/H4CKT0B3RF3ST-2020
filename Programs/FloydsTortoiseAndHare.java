class FloydsTortoiseAndHare
{
 public static int findDuplicate(int[] nums)
  {
    //intertsection points of tortoise and hare
    int tortoise = nums[0];
    int hare = nums[0];
    
    do
     {
       tortoise=nums[tortoise];
       hare= nums[nums[hare]];
     }while(tortoise!= hare);
     
     //find entrnace of cycle
     
     tortoise=nums[0];
     while(tortoise!= hare)
     { 
       tortoise=nums[tortoise];
       hare = nums[hare];
     }
     return hare;
  }
  public static void main(String[] args)
   {
     int[] nums={2,3,4,2,6};
     int val = findDuplicate(nums);
     System.out.println("The duplicate value in the array is: "+val);
   }
}


//Time complexity - O(n)    // Space complexity - O(1)
