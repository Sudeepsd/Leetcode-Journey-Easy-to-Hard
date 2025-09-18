class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prevIdx = -k - 1;

        for (int i = 0; i < nums.size(); ++i) { // O(n)
            if (nums[i]) {
                if (i - prevIdx <= k)
                    return false;

                prevIdx = i;
            }
        }

        return true;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)