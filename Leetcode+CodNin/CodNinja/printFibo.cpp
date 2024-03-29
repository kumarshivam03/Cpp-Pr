vector<int> generateFibonacciNumbers(int n)
{ // cod nin
    vector<int> ans;
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    // ans.push_back(0);
    // ans.push_back(1);
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        // ans.push_back(fib[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(fib[i]);
    }
    return ans;
}