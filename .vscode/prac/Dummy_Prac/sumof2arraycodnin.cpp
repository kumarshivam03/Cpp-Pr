#include <bits/stdc++.h>
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1, j = m - 1, k;
    vector<int> ans;
    int carry = 0;
    int sum = 0;
    while (i >= 0 && j >= 0)
    {
        int n1 = a[i];
        int n2 = b[j];
        int sum = n1 + n2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--, j--;
    }
    while (i >= 0)
    {
        int n1 = a[i];
        int sum = n1 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int n2 = b[j];
        int sum = n2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}