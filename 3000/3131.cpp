class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int i = 0; i < nums1.size(); ++i) {
            min1 = min(min1, nums1[i]);
            min2 = min(min2, nums2[i]);
        }

        return min2 - min1;
    }
};

// Time Complexity: O(n), size of input arrays
// Space Complexity: O(1)