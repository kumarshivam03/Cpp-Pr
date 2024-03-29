int findDuplicate(vector<int> &arr)
{
    int i, ans = 0;
    for (i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    for (i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.