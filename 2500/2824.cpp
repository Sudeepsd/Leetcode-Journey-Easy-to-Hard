class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int left = 0, right = nums.size() - 1;

        // Binary Search - O(n)
        while (left < right) {
            if (nums[left] + nums[right] < target) {
                count += (right - left);
                ++left;
            } else {
                --right;
            }
        }

        return count;
    }
};

// Time Complexity: O(n log n), to sort the array
// Space Complexity: O(1)