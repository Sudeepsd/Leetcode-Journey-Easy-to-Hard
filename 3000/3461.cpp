class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.length();
        while(n-- > 2) { // O(n)
            for (int i = 0; i < n; ++i) // O(n)
                s[i] = ((s[i] - '0') + (s[i + 1] - '0')) % 10 + '0';
        }

        return s[0] == s[1];
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)