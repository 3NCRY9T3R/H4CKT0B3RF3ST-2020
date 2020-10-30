#include<bits/stdc++.h>

using namespace std;

vector<int> twoSums(vector<int>& nums, int target)
{
    vector<int> result;
    unordered_map<int,int> hashMap;

    unordered_map<int,int>:: iterator itr;

    for(int i = 0; i < nums.size(); i++)
    {
        int srch = target - nums[i] ;
        itr = hashMap.find(srch);
        if(itr == hashMap.end())
            hashMap[nums[i]] = i;
        else
        {
            if( i < itr->second )
            {
                result.push_back(i);
                result.push_back(itr -> second);
            }
            else
            {
                result.push_back(itr -> second);
                result.push_back(i);
            }

        }
    }

    return result;
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

    result = twoSums(nums,x);

    for(int i =0 ; i < result.size(); i++)
    {
        cout << result[i];
    }

    return 0;
}
