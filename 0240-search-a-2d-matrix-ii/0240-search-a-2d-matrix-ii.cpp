class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowindx = 0;
        int colindx = col - 1;

        while (rowindx < row && colindx >= 0) {
            int element = matrix[rowindx][colindx];

            if (element == target) {
                return true;
            } else if (element < target) {
                rowindx++;
            } else {
                colindx--;
            }
        }
        return false;
    }
};