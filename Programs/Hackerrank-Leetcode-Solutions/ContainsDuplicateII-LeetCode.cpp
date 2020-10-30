#include<bits/stdc++.h>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k)
{
    unordered_map<int,int> hashMap;

    for(int i =0; i < nums.size(); i++)
    {
        if(hashMap.find(nums[i]) != hashMap.end() && i - (hashMap.find(nums[i])->second) <= k)
            return true;
        else
            hashMap[nums[i]] = i;
    }
    return false;
}

int main()
{
    vector<int> nums,result;
    int n,x;
    cin >> n;

    for(int i =0 ; i < n; i++)
    {
        cin>>x;
        nums.push_back(x);
    }

    cin>>x;
        cout << containsNearbyDuplicate(nums,x);


    return 0;
}
