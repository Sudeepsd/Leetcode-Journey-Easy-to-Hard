class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }

        return nums;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)