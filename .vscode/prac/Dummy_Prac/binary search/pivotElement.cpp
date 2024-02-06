#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    int n = 8;
    int rotatedArray[] = {37, 45, 65, 80, 1, 10, 20, 30}; // rotate means 1,10,20,30,37,45,65,80...but is rotated by 4
    cout << pivot(rotatedArray, n);
}