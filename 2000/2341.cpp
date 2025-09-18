class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int pairs = 0, leftover = 0;

        for (int x : nums)
            ++freq[x];

        for (auto& [k, v] : freq) {
            pairs += v / 2;
            leftover += v % 2;
        }

        return {pairs, leftover};
    }
};

// Time Complexity: O(n), n = size of input array
// Space Complexity: O(u), u = number of unique elements