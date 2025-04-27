#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) 
{
    int l = 0, r = numbers.size() - 1;
    vector<int> v;
    while(l < r)
    {
        if (numbers[r] + numbers[l] == target && numbers[l]!=numbers[r])
        {
            v.push_back(l+1);
            v.push_back(r+1);
            return v;
        }
        else if (numbers[r] + numbers[l] > target)
        {
            r--;
        }
        else if (numbers[r] + numbers[l] < target)
        {
            l++;
        }
            
    }       
}

int main()
{
    //accepted
}