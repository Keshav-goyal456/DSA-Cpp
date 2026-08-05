class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> grid2(m, vector<int>(n));

        grid2[0][0] = grid[0][0];

        for (int j = 1; j < n; j++) {
            grid2[0][j] = grid2[0][j - 1] + grid[0][j];
        }

        for (int i = 1; i < m; i++) {
            grid2[i][0] = grid2[i - 1][0] + grid[i][0];
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                grid2[i][j] = grid[i][j] + min(grid2[i - 1][j], grid2[i][j - 1]);
            }
        }

        return grid2[m - 1][n - 1];
    }
};