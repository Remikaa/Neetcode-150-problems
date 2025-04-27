#include <bits/stdc++.h>
using namespace std;

bool correct (char c)
{
    return ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') );
}

bool isPalindrome(string s) 
{
    int i = 0, j = s.size() - 1;
    while(i < j)
    {
        while(i < j && !(correct(s[i])))
        {
            i++;
        }
        while(j > i && !(correct(s[j])))
        {
            j--;
        }

        if (tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }
        i++; j--;
    }
    return true;
}



int main()
{
    //WHY DIDNT HE SPECIFY THE INPUTS????
    //Accepted after 7 tries BECAUSE HE NEVER SPECIFIED WHAT CAN HE ENTER IN THE STRING
}