class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int equal = 0, smaller = 0;

        for (int x : nums) {
            if (x < target) ++smaller;
            else if (x == target) ++equal;
        }

        vector<int> ans;
        for (int i = smaller; i < smaller + equal; ++i)
            ans.push_back(i);

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)