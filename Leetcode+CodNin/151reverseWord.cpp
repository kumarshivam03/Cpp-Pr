#include <bits/stdc++.h> // this is not solution of leetcode as it was locked on 08-02-24 but logic is same
using namespace std;

void reversee(string s)
{
    stack<string> ans;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        ans.push(word);
    }
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
}

int main()
{
    string s = "i am kumar shivam ";
    reversee(s);
    return 0;
}