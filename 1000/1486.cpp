class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;

        for (int i = 0; i < n; ++i) // O(n)
            ans ^= (start + 2 * i);

        return ans;
    }
};

// Time Complexity: O(n), iterating from 0 to n - 1
// Space Complexity: O(1)