class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int left = 0, right = nums.size() - 1;
        int k = nums.size() - 1;

        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[k--] = nums[left] * nums[left];
                ++left;
            } else {
                ans[k--] = nums[right] * nums[right];
                --right;
            }
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(n), for the output array