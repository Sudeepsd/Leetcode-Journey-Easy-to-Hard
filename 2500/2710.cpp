class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length() - 1;
        while (n >= 0 && num[n] == '0')
           --n;

        return num.substr(0, n + 1);
    }
};

// Time Complexity: O(n), length of string
// Space Complexity: O(1)