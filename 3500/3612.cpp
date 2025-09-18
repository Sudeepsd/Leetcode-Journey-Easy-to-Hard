class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for (char c : s) { // O(k)
            if (c == '*') {
                if (!ans.empty())
                    ans.pop_back();
            } else if (c == '#') {
                ans += ans; // O(n)
            } else if (c == '%') {
                reverse(ans.begin(), ans.end()); // O(n)
            } else {
                ans.push_back(c);
            }
        }
        return ans;
    }
};

// Time Complexity: O(k * 2^n), k = length of string, n = number of '#'.
// Space Complexity: O(1)