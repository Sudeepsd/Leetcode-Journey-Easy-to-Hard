class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        uint64_t mask = 0;
        int ans = 0;

        for (char c : jewels) {
            int pos = (c >= 'a') ? (26 + c - 'a') : c - 'A';
            mask |= (1ULL << pos);
        }

        for (char c : stones) {
            int pos = (c >= 'a') ? (26 + c - 'a') : c - 'A';
            if (mask & (1ULL << pos)) 
                ++ans;
        }

        return ans;
    }
};

// Time Complexity: O(n), for iterating both strings
// Space Complexity: O(1)