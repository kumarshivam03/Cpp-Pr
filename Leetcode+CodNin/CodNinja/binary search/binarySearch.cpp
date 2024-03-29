#include <iostream>
using namespace std;

int binary(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // this is used to decrease if low=2^31-1 high=2^31-1 size mid should be in ramge of integer or int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {3, 4, 5, 6, 7};
    int key = 7;
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int index = binary(arr, size, key);
    cout << "Index:" << index;
    return 0;
}
