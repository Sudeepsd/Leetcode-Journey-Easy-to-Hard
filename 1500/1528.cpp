class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string t = s; // O(n)

        for (int i = 0; i < indices.size(); ++i) { // O(n)
            t[indices[i]] = s[i];
        }

        return t;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)