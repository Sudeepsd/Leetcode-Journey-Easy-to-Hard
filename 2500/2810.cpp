class Solution {
public:
    string finalString(string s) {
        string ans = "";

        for (char c : s) // O(n)
            if (c == 'i')
                reverse(ans.begin(), ans.end()); // O(n)
            else
                ans.push_back(c);

        return ans;
    }
};

// Time Complexity: O(n * k), n = length of string, k = times 'i' appears
// Space Complexity: O(1)