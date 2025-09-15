class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i) {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)