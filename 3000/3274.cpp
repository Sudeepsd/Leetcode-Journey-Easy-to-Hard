class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int row1 = coordinate1[0] - 'a', col1 = coordinate1[1] - '0';
        int row2 = coordinate2[0] - 'a', col2 = coordinate2[1] - '0';

        return (row1 + col1) % 2 == (row2 + col2) % 2;
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)