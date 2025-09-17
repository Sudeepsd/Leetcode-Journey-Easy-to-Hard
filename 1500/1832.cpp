class Solution {
public:
    bool checkIfPangram(string sentence) {
        uint32_t mask = 0;

        for (char c : sentence) {
            mask |= 1ULL << (c - 'a');
        }

        return mask == (1ULL << 26) - 1;
    }
};

// Time Complexity: O(n), length of string
// Space Complexity: O(1)