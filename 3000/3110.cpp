class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;

        for (int i = 1; i < s.length(); ++i) {
            ans += abs(s[i] - s[i - 1]);
        }

        return ans;
    }
};

// Time Complexity: O(n), length of string
// Space Complexity: O(1)