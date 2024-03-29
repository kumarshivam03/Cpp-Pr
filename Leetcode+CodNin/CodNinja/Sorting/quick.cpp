/*
    The function is called with the parameters:
    quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end)
{

    int pivot = input[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (i <= end && input[i] <= pivot)
        {
            i++;
        }
        while (j >= start && input[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            // Swap arr[i] and arr[j]
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
        }
    }

    // Swap arr[low] (pivot) with arr[j]
    int temp = input[start];
    input[start] = input[j];
    input[j] = temp;

    return j;
}

void quickSort(int input[], int start, int end)
{
    if (start < end)
    {
        int partitionIndex = partitionArray(input, start, end);
        quickSort(input, start, partitionIndex - 1);
        quickSort(input, partitionIndex + 1, end);
    }
}
