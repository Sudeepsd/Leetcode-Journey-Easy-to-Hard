class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // O(n log n)

        int averages = INT_MAX;
        for (int l = 0, r = nums.size() - 1; l < r; ++l, --r) { // O(n)
            averages = min(averages, nums[l] + nums[r]);
        }

        return (double)averages / 2.0;
    }
};

// Time Complexity: O(n log n), size of input array
// Space Complexity: O(1)