/*
    Time complexity: O(N)
    Space complexity: O(1)

    Where 'N' is the input array 'A'.
*/

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // Initializing the driver variables.
    int small = INT_MAX, secondSmall = INT_MAX;
    int large = INT_MIN, secondLarge = INT_MIN;

    // Iterating over an array and calculating the smaller and larger numbers.
    for (int i = 0; i < n; i++)
    {
        small = min(small, a[i]);
        large = max(large, a[i]);
    }

    // Iterating again and updating the second order numbers.
    for (int i = 0; i < n; i++)
    {
        if (a[i] < secondSmall && a[i] != small)
        {
            secondSmall = a[i];
        }
        if (a[i] > secondLarge && a[i] != large)
        {
            secondLarge = a[i];
        }
    }

    return {secondLarge, secondSmall};
}

// or

/*
    Time complexity: O(N * Log(N))
    Space complexity: O(1)

    Where 'N' is the input array 'A'.
*/

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // Sorting out the given input array.
    sort(a.begin(), a.end());
    return {a[n - 2], a[1]};
}
