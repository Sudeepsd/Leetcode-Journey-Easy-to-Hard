class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> seen;

        for (int x : nums) {
            if (seen.find(x) != seen.end())
                ans ^= x;

            seen.insert(x);
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(n), use of unordered_set

// Alternatively, as constraints are bounded small values (nums[i] ≤ 50), 
// then bitmask or array frequency could have been used. But for general case
// large n, unordered_set approach is the optimal choice