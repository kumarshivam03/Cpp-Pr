#include <bits/stdc++.h>
using namespace std;
string replaceSpaces(string &str)
{
    string temp = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

// or

string replaceSpaces(string &str)
{
    string ans = "";
    string neww = "@40";
    for (char c : str)
    {
        if (c == ' ')
        {
            ans += neww;
        }
        else
        {
            ans += c;
        }
    }
    return ans;
}

// or

string replaceSpaces(string &str)
{
    int i, j = 0;
    string ans = "";
    string neww = "@40";
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {

            ans += neww;
        }
        else
        {
            ans += str[i];
        }
    }
    return ans;
}
