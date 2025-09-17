class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        vector<int> maxVal(cols, INT_MIN);

        for (int c = 0; c < cols; ++c)
            for (int r = 0; r < rows; ++r)
                maxVal[c] = max(maxVal[c], matrix[r][c]);

        for (int r = 0; r < rows; ++r)
            for (int c = 0; c < cols; ++c)
                if (matrix[r][c] == -1)
                    matrix[r][c] = maxVal[c];

        return matrix;
    }
};

// Time Complexity: O(rows * cols), number of elements in matrix
// Space Complexity: O(cols), for storing col maximums