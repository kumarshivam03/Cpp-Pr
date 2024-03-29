#include <iostream>
using namespace std;

int main()
{
    int num[10] = {0, 0, 1, 0, 1, 1, 0, 2, 1, 2};
    int low = 0, mid = 0, high = 9; // this logic fits there
    while (mid <= high)
    {
        switch (num[mid])
        {
        case 0:
            swap(num[low++], num[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(num[mid], num[high--]);
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
}

// #include <bits/stdc++.h>             //for 2-point approach for 0,1

// using namespace std;
// void sort(int arr[]){
//     int i=0,j=7;
//     while(i<j){
//     while(arr[i]==0&&i<j){
//         i++;
//     }
//     while(arr[j]==1&&i<j){
//         j--;
//     }
//     if(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     }
//     for(i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
//     return;
// }

// int main()
// {
//     int marr[8]={1,1,1,0,1,0,0,0};
//     sort(marr);

//     return 0;
// }
