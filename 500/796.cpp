class Solution {
public:
    bool rotateString(string s, string goal) {
        for (int shift = 0; shift < s.length(); ++shift) {
            s = s.substr(1) + s.substr(0, 1);
            if (s.compare(goal) == 0)
                return true;
        }
        return false;
    }
};

// Time Complexity: O(n), length of string
// Space Complexity: O(1)