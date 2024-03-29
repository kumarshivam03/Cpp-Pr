#include <vector>
#include <map>

int getSingleElement(vector<int> &arr)
{
	int i, n = arr.size();
	for (i = 0; i < arr.size(); i = i + 2)
	{
		if (arr[i] != arr[i + 1])
		{
			return arr[i];
		}
	}
}

// better    tc=o(n/2+1)
#include <vector>
#include <map>

int getSingleElement(vector<int> &arr)
{
	int i, n = arr.size();
	int b;
	map<int, int> mp;
	for (i = 0; i < n; i++)
	{
		mp[arr[i]]++;
	}
	for (auto it : mp)
	{
		if (it.second == 1)
		{
			b = it.first;
			break;
		}
	}
	return b;
}
// optimal O(n)
#include <vector>
#include <map>

int getSingleElement(vector<int> &arr)
{
	int xor1 = 0, xor2 = arr[0];
	int N = arr.size();
	for (int i = 1; i < N; i++)
	{
		xor2 = xor2 ^ arr[i]; // XOR of array elements//XOR up to [1...N]
	}
	return (xor2);
}