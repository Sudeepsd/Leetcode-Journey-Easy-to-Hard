class Solution {
public:
    string defangIPaddr(string address) {
        string ans;

        for (char c : address) {
            if (c == '.')
                ans += "[.]";
            else
                ans += c;
        }

        return ans;
    }
};

// Time Complexity: O(n), where n is length of address
// Space Complexity: O(1)
