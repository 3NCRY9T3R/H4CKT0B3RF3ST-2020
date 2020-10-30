#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums)
{
    int n = nums.size(), i = 0;

    while(i < n)
    {
        if( nums[i] == 0)
        {
            for(int j = i; j < n-1; j++)
            {
                nums[j] = nums[j+1];
            }
            nums[--n] = 0;
        }
        else
            i++;
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

    moveZeroes(nums);

    for(int i =0 ; i < n; i++)
    {
        cout << nums[i];
    }

    return 0;
}
