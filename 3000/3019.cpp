class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;

        for (int i = 1; i < s.length(); ++i) // O(n)
            // The difference between lowercase and uppercase is their 6th bit (32 decimal).
            // Using c | 32 always gives the lowercase.
            if ((s[i] | 32) != (s[i - 1] | 32))
                ++ans;

        return ans;
    }
};

// Time Complexity: O(n), length of string
// Space Complexity: O(1)