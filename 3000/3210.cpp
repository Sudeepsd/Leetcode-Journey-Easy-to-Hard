class Solution {
public:
    string getEncryptedString(string s, int k) {
        k %= s.length();

        reverse(s.begin(), s.begin() + k); // O(k)
        reverse(s.begin() + k, s.end());   // O(n - k)
        reverse(s.begin(), s.end());       // O(n)
        // Total: O(2n) = O(n)

        return s;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)