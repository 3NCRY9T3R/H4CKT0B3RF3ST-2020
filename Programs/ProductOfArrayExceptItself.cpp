class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     
        int n = nums.size();
        int  b[n];
        b[0] = 1;
        for(int i = 1; i< n; i++)
        {
            b[i] = nums[i-1]*b[i-1];
            
        }
        int r= 1;
        for(int i = n-1 ; i>=0 ; i--)
        {
            b[i] = b[i]*r;
            r = r*nums[i];
        }
        vector <int> output;
        for(int i = 0; i < n ; i++)
        {
            int k = b[i];
            output.push_back(k);
        }
        return output;
    }
};
