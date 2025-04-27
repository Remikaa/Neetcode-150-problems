#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
    vector<vector<int>> v;
    set<vector<int>> s;
    sort(nums.begin(),nums.end());
    int l = 0,r = 1;
    if (nums.size() == 3)
    {
        if (nums[l] + nums[r] + nums[2] == 0)
            s.insert( {nums[l] , nums[r] , nums[2]} );
    }
    else
    {
            while(r <= nums.size() - 2)
            {
                for (int i = r+1 ; i < nums.size() ; i++)
                {
                    if (nums[l] + nums[r] + nums[i] == 0)
                    {
                        s.insert({nums[l] , nums[r] , nums[i]});
                    }
                }
                r+=1;
                if (r == nums.size() - 2 && l != nums.size() - 3)
                {
                    l+=1;
                    r = l+1;
                }
            }
    }
    
    v.assign(s.begin(), s.end());
    return v;
}

int main()
{
    //took me 4 tries to get accepted. i should work on this. and this is o(n^3) so ill redo this.
}