class Solution {
public:
    bool isSameAfterReversals(int num) {
        return (num == 0 || num % 10 != 0);
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)