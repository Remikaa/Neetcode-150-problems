#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp = {};
        map<int,int> ind = {};
        for (int i = 0; i < nums.size();i++)
        {
            mp[nums[i]]++;
            ind[nums[i]] = i;
        }
        for (int i = 0; i < nums.size();i++)
        {
            int x = target - nums[i];
            if (x == nums[i])
            {
                if (mp[x] >= 2)
                {
                    //do nothing
                }
                else
                    continue;
            }
            if (mp[x] > 0)
            {
                vector<int> v;
                v.push_back(i);
                v.push_back(ind[x]);
                return v;
            }
        }
        vector<int> vv;
        return vv; //to avoid the problems of git and compiler this isnt necessary to the solution
}

int main()
{
   //accepted
}