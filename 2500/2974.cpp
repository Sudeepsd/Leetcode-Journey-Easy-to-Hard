class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // O(n log n)

        for (int i = 1; i < nums.size(); i += 2) // O(n)
            swap(nums[i], nums[i - 1]);

        return nums;
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(1)