#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) 
    {
        map<char,int>mpcol = {};
        map<char,int>mprow = {};
        map<char,int>mpt1 = {};
        map<char,int>mpt2 = {};
        map<char,int>mpt3 = {};
        map<char,int>mpt4 = {};
        map<char,int>mpt5 = {};
        map<char,int>mpt6 = {};
        map<char,int>mpt7 = {};
        map<char,int>mpt8 = {};
        map<char,int>mpt9 = {};

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mprow[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mprow[board[i][j]]++;
                }
            }
            mprow.clear();

        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] != '.')
                {
                    if (mpcol[board[j][i]] == 1)
                    {
                        return false;
                    }
                    mpcol[board[j][i]]++;
                }
            }
            mpcol.clear();
        }

        for (int i = 0; i < 3; i++) //square 1
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt1[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt1[board[i][j]]++;
                }
            }
            
        }

        for (int i = 0; i < 3; i++) //square 2
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt2[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt2[board[i][j]]++;
                }
            }
            
        }

        for (int i = 0; i < 3; i++) //square 3
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt3[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt3[board[i][j]]++;
                }
            }
            
        }

        for (int i = 3; i < 6; i++) //square 4
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt4[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt4[board[i][j]]++;
                }
            }
            
        }

        for (int i = 3; i < 6; i++) //square 5
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt5[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt5[board[i][j]]++;
                }
            }
            
        }

        for (int i = 3; i < 6; i++) //square 6
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt6[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt6[board[i][j]]++;
                }
            }
            
        }

        for (int i = 6; i < 9; i++) //square 7
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt7[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt7[board[i][j]]++;
                }
            }
            
        }

        for (int i = 6; i < 9; i++) //square 8
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt8[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt8[board[i][j]]++;
                }
            }
            
        }

        for (int i = 6; i < 9; i++) //square 9
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if (mpt9[board[i][j]] == 1)
                    {
                        return false;
                    }
                    mpt9[board[i][j]]++;
                }
            }
            
        }

        return true;
    }

int main()
{
    //accepted but brute force solution
}