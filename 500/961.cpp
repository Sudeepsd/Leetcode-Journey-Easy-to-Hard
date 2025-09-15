class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // The number repeating must be within a distance of 2 somewhere
        for (int i = 2; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] || nums[i] == nums[i - 2])
                return nums[i];
        }

        // If not found, duplicates are at extremes, [x, .., .., x]
        return nums[0];
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)