class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int lower = lower_bound(nums.begin(), nums.end(), 0) - nums.begin(); // O(log n)
        int upper = upper_bound(nums.begin(), nums.end(), 0) - nums.begin(); // O(log n)
        return max(lower, (int)nums.size() - upper);
    }
};

// Time Complexity: O(log n)
// Space Complexity: O(1)