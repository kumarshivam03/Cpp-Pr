#include <iostream>
using namespace std;

void unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Unique Element is:" << ans << endl;
}


// void unique(int arr[], int n)
// {
//     int ct[n] = {0}, i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 ct[i] = 1;
//             }
//         }
//     }
//     cout << "Unique Elements are:" << endl;
//     for (i = 0; i < n; i++)
//     {

//         if (ct[i] != 1) /// to get duplicates just equate ct[i]==1
//         {
//             cout << arr[i] << " ";
//         }
//     }
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
    unique(arr, size);
}