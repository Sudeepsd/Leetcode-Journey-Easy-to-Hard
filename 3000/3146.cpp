class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> charIdx(26, 0);
        int ans = 0;

        for (int i = 0; i < s.length(); ++i) {
            charIdx[s[i] - 'a'] = i;
        }

        for (int i = 0; i < t.length(); ++i) {
            ans += abs(charIdx[t[i] - 'a'] - i);
        }

        return ans;
    }
};

// Time Complexity: O(n), length of strings
// Space Complexity: O(1), array of constant size