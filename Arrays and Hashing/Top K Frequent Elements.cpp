#include <bits/stdc++.h>
using namespace std;


vector<int> topKFrequent(vector<int>& nums, int k) 
{
    vector<int> v;
    map<int,int> mp = {};
    for (int i = 0; i < nums.size();i++)
    {
        mp[nums[i]]++;
    }
    
    while(k--)
    {
        int maxCntr = 0;
        int maxValue = 0;
        for (auto it : mp)
        {
            int cntr = it.second;
            if (cntr > maxCntr)
            {
                maxValue = it.first;
                maxCntr = cntr;
            }
        }
        mp.erase(maxValue);
        v.push_back(maxValue);
    }
    return v;
}

int main()
{
   //accepted but not good time complexity
}