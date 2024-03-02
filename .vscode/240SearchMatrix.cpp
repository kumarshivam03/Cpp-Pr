class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int s = 0, e = col - 1;
        while (s < row && e >= 0)
        {
            int ele = matrix[s][e];
            if (ele == target)
            {
                return true;
            }
            if (ele > target)
            {
                e--;
            }
            else
            {
                s++;
            }
        }
        return 0;
    }
};