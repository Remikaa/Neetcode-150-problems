#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& heights) //Brute Force
{
    int maxVal = 0;
    for (int i = 0; i < heights.size() - 1; i++)
    {
        for (int j = i + 1; j < heights.size();j++)
        {
            maxVal = max(maxVal,(abs(j - i)) * min(heights[i],heights[j]));
        }
    }
    return maxVal;
}

int maxArea2(vector<int>& heights) //Two pointers
{
    int l = 0, r = heights.size() - 1;
    int maxVal = 0;
    while(l < r)
    {
        int area = abs(r - l) * min(heights[l],heights[r]);
        maxVal = max(maxVal,area);
        if (heights[l] > heights [r])
        {
            r--;
        }
        else
        {
            l++;
        }
        
    }
}

int main()
{
    //accepted 
}