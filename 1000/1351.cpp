class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0;

        int row = 0, col = n - 1;
        while (row < m && col >= 0) {
            if (grid[row][col] >= 0) {
                ++row;
            } else {
                --col;
                ans += m - row;
            }
        }

        return ans;
    }
};

// Time Complexity: O(m + n), m = rows, n = cols
// Space Complexity: O(1)