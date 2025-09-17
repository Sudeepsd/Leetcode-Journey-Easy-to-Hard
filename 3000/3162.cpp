class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        for (int i = 0; i < nums2.size(); ++i)
            nums2[i] *= k;
        sort(nums2.begin(), nums2.end());

        int ans = 0;
        for (int x : nums1) {
            int i = 0;
            while (i < nums2.size() && nums2[i] <= x) {
                if (x % nums2[i] == 0) ++ans;
                ++i;
            }
        }

        return ans;
    }
};

// Time Complexity: O(m * n), m & n are size of input arrays
// Space Complexity: O(1)