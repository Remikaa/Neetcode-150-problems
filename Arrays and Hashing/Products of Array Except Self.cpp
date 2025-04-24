#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) 
    {
        int multipleWithoutZero = 1;
        int zeroCounter = 0;
        vector<int> v;
        for (int i = 0; i < nums.size();i++)
        {
            if (nums[i]==0)
            {
                zeroCounter++;
                continue;
            }
            else
                multipleWithoutZero *= nums[i];
        }

        if (zeroCounter == 0)
        {
            for (int i = 0; i < nums.size();i++)
            {
               v.push_back(multipleWithoutZero/nums[i]);
            }
            return v;
        }

        else if (zeroCounter == 1)
        {
            for (int i = 0; i < nums.size();i++)
            {
                if (nums[i] == 0)
                {
                    v.push_back(multipleWithoutZero);
                }
                else
                {
                    v.push_back(0);
                }
                    
            }
            return v;
        }

        else if (zeroCounter > 1)
        {
            for (int i = 0; i < nums.size();i++)
            {
                v.push_back(0);  
            }
            return v;
        }
        
    }

int main()
{
    vector<int> v = {1,2,4,6};
    vector<int> vv = productExceptSelf(v);
    for (auto it: vv)
        cout << it << endl;
        //accepted

}