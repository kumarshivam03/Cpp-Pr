int fiind(vector<vector<int>> &mat, int mid, int n, int m)
{
    int i, maxi = -1, ind = -1;
    for (i = 0; i < n; i++)
    {
        if (mat[i][mid] > maxi)
        {
            maxi = mat[i][mid];
            ind = i;
        }
    }
    return ind;
}
class Solution
{
public:
    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int maxRow = fiind(mat, mid, n, m);
            int left = mid - 1 >= 0 ? mat[maxRow][m - 1] : -1;
            int right = mid + 1 < m ? mat[maxRow][m + 1] : -1;
            if (mat[maxRow][mid] > left && mat[maxRow][mid] > right)
            {
                return {maxRow, mid};
            }
            else if (mat[maxRow][mid] < left)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};