class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;

        for (int x : nums) // O(n)
            if (x % 2 == 0)
                sum += x;

        vector<int> ans;
        for (auto& query : queries) { // O(n)
            int val = query[0];
            int idx = query[1];

            if (nums[idx] % 2 == 0)
                sum -= nums[idx];

            nums[idx] += val;
            
            if (nums[idx] % 2 == 0)
                sum += nums[idx];

            ans.push_back(sum);
        }

        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)