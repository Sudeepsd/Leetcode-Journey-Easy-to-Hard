class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> count;

        for (auto x : nums)
            ans += count[x]++;

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(n), size of unordered_map