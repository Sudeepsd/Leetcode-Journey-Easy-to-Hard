// Time Complexity: O(n log n), for sorting
// Space Complexity: O(n), for the extra map and copy

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted(nums.begin(), nums.end());
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> rank;
        for (int i = 0; i < sorted.size(); ++i)
            if (!rank.count(sorted[i]))
                rank[sorted[i]] = i;

        vector<int> ans;
        for (int x : nums)
            ans.push_back(rank[x]);

        return ans;
    }
};

// The above algorithm works for any n, but since the constraints guarantees
// nums[i] <= 100, we use a more optimal approach.


// vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//     vector<int> count(101, 0);
//
//     for (int x : nums) ++count[x];
//
//     for (int i = 1; i < 101; ++i) 
//         count[i] += count[i - 1];
//
//     vector<int> ans;
//     for (int x : nums) 
//         ans.push_back(x == 0 ? 0 : count[x - 1]);
//
//     return ans;
// }

// Time Complexity: O(n), for the input array
// Space Complexity: O(1), array of constant size