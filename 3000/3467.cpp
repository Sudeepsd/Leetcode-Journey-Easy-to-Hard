class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int odd = 0, even = 0;

        for (int x : nums) {
            if (x % 2 == 0)
                ++even;
            else
                ++odd;
        }

        int idx = 0;
        for (int i = 0; i < even; ++i)
            nums[idx++] = 0;
        for (int i = 0; i < odd; ++i)
            nums[idx++] = 1;

        return nums;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)