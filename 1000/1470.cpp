class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        ans.reserve(2 * n);

        int i = 0, j = n;
        while (i < n) {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)
