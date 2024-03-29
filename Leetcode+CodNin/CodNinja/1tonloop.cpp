vector<int> printNos(int x)
{

    if (x == 0)
    {
        return {};
    }
    vector<int> v = printNos(x - 1);
    v.push_back(x);

    return v;
}
