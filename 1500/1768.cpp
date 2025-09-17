class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;

        int i = 0;
        while (i < word1.length() && i < word2.length()) {
            ans += word1[i];
            ans += word2[i];
            ++i;
        }

        ans += word1.substr(i);
        ans += word2.substr(i);

        return ans;
    }
};

// Time Complexity: O(m + n), length of strings
// Space Complexity: O(1)
