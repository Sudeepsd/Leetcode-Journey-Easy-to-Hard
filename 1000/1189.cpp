class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26, 0);

        for (char c : text)
            ++freq[c - 'a'];

        int ans = INT_MAX;

        ans = min(ans, freq['b' - 'a']);
        ans = min(ans, freq['a' - 'a']);
        ans = min(ans, freq['l' - 'a'] / 2);
        ans = min(ans, freq['o' - 'a'] / 2);
        ans = min(ans, freq['n' - 'a']);

        return ans;
    }
};

// Time Complexity: O(n), length of string
// Space Complexity: O(1), vector of constant space