class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) return ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        int startr = 0;
        int startc = 0;
        int endr = row - 1;
        int endc = col - 1;

        while (count < total) {
            // 1. Traverse Top Row (Left to Right)
            for (int indx = startc; count < total && indx <= endc; indx++) {
                ans.push_back(matrix[startr][indx]);
                count++;
            }
            startr++;

            // 2. Traverse Right Column (Top to Bottom)
            for (int indx = startr; count < total && indx <= endr; indx++) {
                ans.push_back(matrix[indx][endc]);
                count++;
            }
            endc--;

            // 3. Traverse Bottom Row (Right to Left)
            for (int indx = endc; count < total && indx >= startc; indx--) {
                ans.push_back(matrix[endr][indx]);
                count++;
            }
            endr--;

            // 4. Traverse Left Column (Bottom to Top)
            for (int indx = endr; count < total && indx >= startr; indx--) {
                ans.push_back(matrix[indx][startc]);
                count++;
            }
            startc++;
        }   
        return ans;
    }
};