#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) 
    {
        map<int,int>mp = {};
        for (int i = 0; i < nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int counter = 1;
        int maxi = -1e9;

        if (mp.empty())
            return 0;

        for (auto it = mp.begin() ; it != prev(mp.end()); it++)
        {
            auto nextit = next(it);
            if (nextit->first - it->first == 1)
            {
                counter++;
            }
            else
            {
                maxi  = max(counter,maxi);
                counter = 1;
            }
        }
        maxi = max(maxi,counter);
        return maxi;
    }

int main()
{
    vector<int> v = {9,1,4,7,3,-1,0,5,8,-1,6};
    int x = longestConsecutive(v);
    cout << x << endl;
    //accepted
}