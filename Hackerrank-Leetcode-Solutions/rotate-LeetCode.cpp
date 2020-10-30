#include <bits/stdc++.h>

using namespace std;

void rotateArray(vector<int>& nums, int k)
{
    for(int i = 0; i < k; i++ )
    {
        nums.insert(nums.begin(),nums[nums.size()-1]);
        nums.pop_back();
    }
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

    cin >> x;

    rotateArray(nums, x);

    for(int i =0 ; i < n; i++)
    {
        cout << nums[i];
    }

    return 0;
}
