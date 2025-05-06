#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxProfit(vector<int>& prices) { //brute force solution o(n^2)
    int minnum = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i; j < prices.size(); j++)
        {
            int x = prices[i] - prices[j];
            minnum = min(minnum,x);
        }
        
    }
    if (minnum <= 0)
        return minnum * -1;
    else
    {
        return 0;
    }
    
}

int maxProfit2(vector<int>& prices) { //i think this is an o(n) solution
    int mindiff = 0;
    int max = 0;
    vector<int> maxatpos(prices.size());
    for (int i = prices.size()-1; i >= 0; i--)
    {
        if (prices[i] > max)
        {
            max = prices[i];
            maxatpos[i] = max;
        }
        else
        {
            maxatpos[i] = max;
        }
    }

    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] - maxatpos[i] < mindiff)
        {
            mindiff = prices[i] - maxatpos[i];
        }
    }
    
    if (mindiff <= 0)
        return mindiff * -1;
    else
    {
        return 0;
    }
    
}

#define endl '\n'
int main()
{
    vector<int> v = {10,1,5,6,7,1};
    cout << maxProfit2(v);
   return 0;
}