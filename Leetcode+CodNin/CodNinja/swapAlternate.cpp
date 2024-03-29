#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapAlter(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    print(arr, n);
}

// void swapAlter(int arr[], int n)
// {
//     int start = 0, end = n - 1;
//     while (start < end)
//     {
//         swap(arr[start], arr[start + 1]);
//         start += 2;
//     }
//     print(arr, n);
// }

int main()
{
    int size, i;
    cin >> size;
    int arr[100];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapAlter(arr, size);
}