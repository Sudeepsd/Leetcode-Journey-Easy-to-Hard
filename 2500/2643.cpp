class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows = mat.size(), cols = mat[0].size();
        int ans = 0, idx = 0;

        for (int i = 0; i < rows; ++i) {
            int cnt = 0;
            for (int j = 0; j < cols; ++j) {
                if (mat[i][j] == 1)
                    ++cnt;
            }

            if (cnt > ans) {
                ans = cnt;
                idx = i;
            }
        }

        return {idx, ans};
    }
};

// Time Complexity: O(m * n), number of elements in the matrix
// Space Complexity: O(1)