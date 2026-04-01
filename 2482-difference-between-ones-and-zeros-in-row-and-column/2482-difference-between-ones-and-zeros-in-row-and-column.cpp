class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        vector<int> row1(n, 0), col1(m, 0);

        // Count 1s in rows and columns
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    row1[i]++;
                    col1[j]++;
                }
            }
        }

        vector<vector<int>> ans(n, vector<int>(m));

        // Compute result
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int row0 = m - row1[i];
                int col0 = n - col1[j];

                ans[i][j] = row1[i] + col1[j] - row0 - col0;
            }
        }

        return ans;
    }
};