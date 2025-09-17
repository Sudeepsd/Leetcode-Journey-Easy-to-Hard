class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_set<string> seen;
        for (int i = 0; i < s.length() - 1; ++i) // O(n)
            seen.insert(s.substr(i, 2));

        reverse(s.begin(), s.end()); // O(n)

        for (int i = 0; i < s.length() - 1; ++i) // O(n)
            if (seen.count(s.substr(i, 2)))
                return true;

        return false;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)