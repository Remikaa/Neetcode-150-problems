#include <bits/stdc++.h>
using namespace std;

bool hasDuplicate(vector<int>& nums) {
    bool dupli = false;
    map<int,int> mp = {};
    for (int i = 0; i < nums.size();i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] > 1)
            dupli = true;
    }
    return dupli;
}

int main()
{
    //problem accepted
}