#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum, max_sum, i ,j;
    max_sum = nums[0];

    for(i = 0; i < nums.size(); i++){
        sum = 0;
        for(j = i; j < nums.size(); j++){
            sum += nums[j];
            if(sum > max_sum)
                max_sum = sum;
            cout<<i<<':'<<sum<<endl;
        }
        cout<<endl;
    }

    return max_sum;
}

int main(){
    vector<int> nums;
    int n,no;;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        cin>>no;
        nums.push_back(no);
    }
    cout<<maxSubArray(nums);
    return 0;
}
