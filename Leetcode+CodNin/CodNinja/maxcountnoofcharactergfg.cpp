https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
       int ans=0,max=-1,i,number;
       int arr[26]={0};
       for(i=0;i<str.length();i++){
           char ch=str[i];
           number=ch-'a';
           arr[number]++;
       }
       for(i=0;i<26;i++){
           if(ans<arr[i]){
               max=i;
               ans=arr[i];
           }
       }
       return (max+'a');
    }

};