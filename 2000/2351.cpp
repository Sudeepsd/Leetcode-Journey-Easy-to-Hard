class Solution {
public:
    char repeatedCharacter(string s) {
        int mask = 0;

        for (char c : s) {
            int bit = 1 << (c - 'a');
            if (mask & bit)
                return c;
            mask |= bit;
        }

        return '\0';
    }
};

// Time Complexity: O(n), length of string
// Space Complexity: O(1)

// Alternatively, this can be done with an unordered_set, 
// but using bitmasking is a more optimal approach