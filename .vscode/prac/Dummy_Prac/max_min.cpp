#include <climits>
#include <iostream>
using namespace std;

int get_max(int arr[], int size)
{
    int i;
    int maxi = INT_MIN;
    for (i = 0; i < size; i++)
    {
        // if (arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }

        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int get_min(int arr[], int size)
{
    int i;
    int mini = INT_MAX;
    for (i = 0; i < size; i++)
    {
        // if (arr[i] < mini)
        // {
        //     mini = arr[i];
        // }

        mini = min(mini, arr[i]);
    }
    return mini;
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
    cout << "maximum element is: " << get_max(arr, size) << endl;
    cout << "minimum element is: " << get_min(arr, size);
}