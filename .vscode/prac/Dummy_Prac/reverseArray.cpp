#include <iostream>
using namespace std;
void printt(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverse(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
    printt(arr, n);
}

int main()
{
    int size, i;
    cin >> size;
    int arr[100];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, size);
}