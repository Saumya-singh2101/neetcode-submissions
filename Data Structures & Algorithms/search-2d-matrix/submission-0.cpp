class Solution {
public:

    bool searchinrow(vector<vector<int>>& matrix, int target, int row) {
        int start = 0;
        int end = matrix[0].size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (matrix[row][mid] == target)
                return true;
            else if (matrix[row][mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();      // rows
        int m = matrix[0].size();   // cols

        int startrow = 0;
        int endrow = n - 1;

        while (startrow <= endrow) {

            int midrow = startrow + (endrow - startrow) / 2;

            if (target >= matrix[midrow][0] && target <= matrix[midrow][m - 1]) {
                return searchinrow(matrix, target, midrow);
            }
            else if (target > matrix[midrow][m - 1]) {
                startrow = midrow + 1;
            }
            else {
                endrow = midrow - 1;
            }
        }

        return false;
    }
};
