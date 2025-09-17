class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        auto cmp = [&](int i1, int i2) {
            return nums[i1] == nums[i2] ? i1 > i2 : nums[i1] > nums[i2];
        };

        priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
        
        for (int i = 0; i < nums.size(); ++i) { // O(n)
            pq.push(i); // O(log n)
        }

        while (k--) { // O(k)
            int idx = pq.top(); pq.pop(); // O(log n)
            nums[idx] *= multiplier;
            pq.push(idx); // O(log n)
        }

        return nums;
    }
};

// Time Complexity: O((n + k) log n)
// Space Complexity: O(n), for the priority_queue