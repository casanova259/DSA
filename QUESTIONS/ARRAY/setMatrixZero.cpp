class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // create a row marker
        vector<int> row(m, 0);
        // create a col marker
        vector<int> col(n, 0);

        // first pass mark rows and cols that need to be zeroed
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // second pass: set cells tp zero based on markets
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // now if the row or col is marked set cell to zero

                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};