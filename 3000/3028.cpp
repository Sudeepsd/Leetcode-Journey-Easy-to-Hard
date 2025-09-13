class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans = 0, dist = 0;

        for (int num : nums) {
            dist += num;
            if (dist == 0) 
                ++ans;
        }

        return ans;
    }
};

// Time complexity: O(n), size of input array
// Space complexity: O(1)