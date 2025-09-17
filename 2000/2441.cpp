class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans = -1;
        unordered_set<int> seen;

        for (int x : nums) {
            if (seen.find(-x) != seen.end())
                ans = max(ans, abs(x));
            seen.insert(x);
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)

/*
Trick for constraints -1000 <= nums[i] <= 1000

int findMaxK(vector<int>& nums) {
    bitset<2001> seen;
    int ans = -1;

    for (int x : nums) {
        seen[x + 1000] = 1;
        if (seen[-x + 1000])
            ans = max(ans, abs(x));
    }

    return ans;
}

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)
*/