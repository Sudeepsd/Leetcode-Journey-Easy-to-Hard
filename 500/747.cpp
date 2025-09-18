class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first = INT_MIN, second = INT_MIN;
        int idx = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > first) {
                second = first;
                first  = nums[i];
                idx = i;
            } else if (nums[i] > second) {
                second = nums[i];
            }
        }

        return first >= second * 2 ? idx : -1;
    }
};

// Time Complexity: O(n), n = size of input array
// Space Complexity: O(1)