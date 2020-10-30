#include <bits/stdc++.h>

using namespace std;
bool duplicates(vector<int>& nums)
{
    int n = nums.size();

    if(n == 1)
        return false;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j ++)
        {
            if(nums[i] == nums[j])
                return true;
        }
    }

    return false;
}

int main()
{
    vector<int> nums;
    int n,x;
    cin >> n;

    for(int i =0 ; i < n; i++)
    {
        cin>>x;
        nums.push_back(x);
    }

    if(duplicates(nums))
        cout<<"Has Duplicates";
    else
        cout<<"Unique";


    return 0;
}
