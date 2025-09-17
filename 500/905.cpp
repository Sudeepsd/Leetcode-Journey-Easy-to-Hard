class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            while (left < right && nums[left] % 2 == 0)
                ++left;
            while (left < right && nums[right] % 2 == 1)
                --right;

            if (left < right)
                swap(nums[left], nums[right]);
        }

        return nums;
    }
};

// Time Complexity: O(n), single pass using two pointers
// Space Complexity: O(1)

// Note: This sort is not stable sort. A stable sort keeps the relative order
// of even/odd numbers.