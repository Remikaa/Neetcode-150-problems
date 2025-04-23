#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vofv;
        map<char,int>mp1 = {};
        map<char,int>mp2 = {};
        vector<string>sv;
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i] == "<" && i == 0 && strs.size() - 1 == 0)
            {
                vector<string>:: iterator it = strs.begin();
                    strs.erase(it);
                    i = -1;
                    continue;
            }
            
            if (!strs.empty() && strs[i]!="<")
            {

                if (i == 0)
                {
                    for (int j = 0; j < strs[i].length();j++)
                    {
                            mp1[strs[i][j]]++;
                    }
                    sv.push_back(strs[i]);
                    if (strs.size()-1 == 0)
                        vofv.push_back(sv);
                     continue;
                }
                else
                {
                    for (int j = 0; j < strs[i].length();j++)
                        {
                                mp2[strs[i][j]]++;                        
                        }
                    
                    if (mp2 == mp1)
                    {
                        sv.push_back(strs[i]);
                        strs[i] = "<";
                        mp2.clear();
                    }
                    else
                    {
                        mp2.clear();
                    }
                }
                
                if (i == strs.size() - 1)
                {
                    if (!sv.empty())
                        vofv.push_back(sv);
                    while(!sv.empty())
                    {
                        sv.pop_back();
                    }
                    vector<string>:: iterator it = strs.begin();
                    strs.erase(it);
                    i = -1;
                    mp1.clear();
                }
            }
        }
        if (vofv.back() == sv)
        {
            return vofv;
        }
        else 
        {
            vofv.push_back(sv);
            return vofv;
        }
}

int main()
{
    //vector<string> v = {"act","pots","tops","cat","stop","hat"};
    vector<string> v = {"","b",""};
    vector<vector<string>> vv = groupAnagrams(v);
    for (auto it : vv)
    {
        for (auto it2 : it)
        {
            cout << it2 << " ";
        }
        cout << endl;
    }
    
    //this failed in empty string mixed with letters test cases.

}