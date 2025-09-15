class Solution {
public:
    int tribonacci(int n) {
        vector<int> T = {0, 1, 1};

        for (int i = 3; i <= n; ++i) {
            T[i % 3] = T[0] + T[1] + T[2];
        }

        return T[n % 3];
    }
};

// Time Complexity: O(n), iterating from 3 to n
// Space Complexity: O(1), vector of constant space