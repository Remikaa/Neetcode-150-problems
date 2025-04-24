#include <bits/stdc++.h>
using namespace std;


string encode(vector<string>& strs) 
{
    string s;
    for (int i = 0; i < strs.size();i++)
    {
        s.append(strs[i]);
        s.append("<");
    }
    return s;
}

vector<string> decode(string s) 
{
    vector<string> v;
    string ss;
    for(int i = 0; i < s.length();i++)
    {
        if (s[i] == '<')
        {
            v.push_back(ss);
            ss.erase(ss.begin(),ss.end());
            continue;
        }
        ss.push_back(s[i]);
        
    }
    return v;
}

int main()
{
    vector<string> vofs = {"neet and me","code","love","you"};
    string s = encode(vofs);
    vector<string> v = decode(s);
    for (auto it : v)
    {
        cout << it << endl;
    }
    //accepted
   
}