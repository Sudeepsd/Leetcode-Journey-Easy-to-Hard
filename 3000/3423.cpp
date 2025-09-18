class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans = abs(nums.back() - nums[0]);

        for (int i = 1; i < nums.size(); ++i) // O(n)
            ans = max(ans, abs(nums[i] - nums[i - 1]));

        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)