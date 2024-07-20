// to find max binary no formed by considering all elements of a given matrix
#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000007

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> matrix;
    matrix.reserve(n * m);

    // Read the matrix elements and store them in a single vector
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int bit;
            cin >> bit;
            matrix.push_back(bit);
        }
    }

    // Sort the vector in descending order to form the largest binary number
    sort(matrix.begin(), matrix.end(), greater<int>());

    // Calculate the largest binary number modulo 1000000007
    long long maxBinaryNumber = 0;
    for (int bit : matrix)
    {
        maxBinaryNumber = (maxBinaryNumber * 2 + bit) % MOD;
    }

    cout << maxBinaryNumber << endl;
    return 0;
}
