#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        
        map<char,int> mp1 = {};
        map<char,int> mp2 = {};
        for (int i = 0; i < s.size();i++)
            mp1[s[i]]++;
        for (int i = 0; i < t.size();i++)
            mp2[t[i]]++;
        
        if (mp1 == mp2)
            return true;
        else
            return false;
}

int main()
{
    //problem accepted
}