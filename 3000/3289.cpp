class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int mask = 0;

        for (int x : nums) mask ^= x;
        for (int i = 0; i < nums.size() - 2; ++i)
            mask ^= i;

        // Both a and b must differ atleast by one bit
        // Finds lowest set bit of a ^ b
        int lsb = ~(mask - 1) & mask;

        // Xors numbers only containing that bit
        int a = 0;
        for (int x : nums) 
            if (x & lsb)
                a ^= x;

        for (int i = 0; i < nums.size() - 2; ++i)
            if (i & lsb)
                a ^= i;

        return {a, mask ^ a};
    }
};

// Time Complexity: O(n), for iterating through array
// Space Complexity: O(1)