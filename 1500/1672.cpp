class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size(), cols = accounts[0].size();
        int maxAmt = 0;

        for (int r = 0; r < rows; ++r) { // O(rows)
            int amt = 0;
            for (int c = 0; c < cols; ++c) { // O(cols)
                amt += accounts[r][c];
            }
            maxAmt = max(maxAmt, amt);
        }

        return maxAmt;
    }
};

// Time Complexity: O(rows * cols)
// Space Complexity: O(1)