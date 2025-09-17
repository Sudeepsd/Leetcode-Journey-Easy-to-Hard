class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size());
        int oddIdx = 1, evenIdx = 0;

        for (int i = 0; i < nums.size(); ++i) { // O(n)
            if (nums[i] % 2 == 0) {
                ans[evenIdx] = nums[i];
                evenIdx += 2;
            } else {
                ans[oddIdx] = nums[i];
                oddIdx += 2;
            }
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)