class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);

        int idx = 0;
        for (int i = 1; i <= n / 2; ++i) {
            ans[idx++] = i;
            ans[idx++] = -i;
        }

        if (n % 2 == 1)
            ans[idx] = 0;

        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)