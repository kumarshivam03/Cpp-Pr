void selectionSort(vector<int> &arr)
{
    int min, i, j;
    int n = arr.size();
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}