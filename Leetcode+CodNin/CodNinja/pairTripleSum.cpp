
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>mas;
   for(int i=0;i<arr.size();i++){
      for(int j=i+1;j<arr.size();j++){
         if(arr[i]+arr[j]==s){
            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            mas.push_back(temp);
         }
      }
   }
   sort(mas.begin(),mas.end());
   return mas;
}
























// #include <bits/stdc++.h>
// using namespace std;
// bool find3Numbers(int A[], int arr_size, int sum)
// {

//     for (int i = 0; i < arr_size - 2; i++)
//     {

//         for (int j = i + 1; j < arr_size - 1; j++)
//         {

//             for (int k = j + 1; k < arr_size; k++)
//             {
//                 if (A[i] + A[j] + A[k] == sum)
//                 {
//                     cout << "Triplet is " << A[i] << ", " << A[j] << ", " << A[k];
//                     return true;
//                 }
//             }
//         }
//     }

//     return false;
// }

// int main()
// {
//     int A[] = {1, 4, 45, 6, 10, 8};
//     int sum = 22;
//     int arr_size = sizeof(A) / sizeof(A[0]);
//     find3Numbers(A, arr_size, sum);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool find3Numbers(int A[], int arr_size, int sum)
// {

//     for (int i = 0; i < arr_size - 1; i++)
//     {

//         for (int k = i + 1; k < arr_size; k++)
//         {
//             if (A[i] + A[k] == sum)
//             {
//                 cout << "Triplet is " << A[i] << ", " << A[k];
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int A[] = {1, 4, 45, 6, 10, 8};
//     int sum = 51;
//     int arr_size = sizeof(A) / sizeof(A[0]);
//     find3Numbers(A, arr_size, sum);
//     return 0;
// }
