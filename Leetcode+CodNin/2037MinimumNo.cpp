#include <bits/stdc++.h>

class Solution
{
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        vector<int> v;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for (int i = 0; i < seats.size(); i++)
        {
            v.push_back(abs(seats[i] - students[i]));
        }

        return accumulate(v.begin(), v.end(), 0);
    }
};