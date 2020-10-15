class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        
        if(digits[n]!=9)
        digits[n--]+=1;
        
        else if(digits[0]==9){
        vector<int> a[n+1];
         a[0]=1;
         return a;
        }
        
        else
        {
            do      
            {
                digits[n] = (digits[n]+1)%10 //
                n--;
            }
            while(digits[n+1]==0) ;
        }  
 
        return digits;
        }
   
};
