class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int minIdx = 0, maxIdx = 0;

        for (int i = indexDifference; i < nums.size(); ++i) {
            int currIdx = i - indexDifference;
            if (nums[currIdx] < nums[minIdx])
                minIdx = currIdx;
            if (nums[currIdx] > nums[maxIdx])
                maxIdx = currIdx;

            if (abs(nums[i] - nums[minIdx]) >= valueDifference)
                return {minIdx, i};
            if (abs(nums[i] - nums[maxIdx]) >= valueDifference)
                return {maxIdx, i};
        }

        return {-1, -1};
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)

// Alternatively, you can use brute force approach,
// and use a nested loop to compare each pair of indices (i, j)
// and check if the conditions are satisfied.