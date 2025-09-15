class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : 2 * n;
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)